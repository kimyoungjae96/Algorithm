#include <stdio.h>
int targetWeight;
int cnt;
int main()
{
    scanf("%d", &targetWeight);
    while (targetWeight >= 0)
    {
        if (targetWeight % 5 == 0)
        {
            printf("%d", (targetWeight / 5) + cnt);
            return 0;
        }

        targetWeight -= 3;
        cnt++;
    }

    printf("-1");

    return 0;
}