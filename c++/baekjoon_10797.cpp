#include <stdio.h>
int day;
int carInfo[5];
int result;
int main()
{
    scanf("%d", &day);
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &carInfo[i]);
        if (carInfo[i] == day)
        {
            result++;
        }
    }
    printf("%d", result);
    return 0;
}