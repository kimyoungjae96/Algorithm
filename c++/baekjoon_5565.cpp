#include <stdio.h>

int sum;
int book[10];
int result;
int main()
{
    scanf("%d", &sum);
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &book[i]);
        result += book[i];
    }

    printf("%d", sum - result);
}