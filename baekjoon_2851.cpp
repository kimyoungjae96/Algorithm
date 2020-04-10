#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int arr[10];
int sum;
int main()
{
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (sum + arr[i] >= 100)
        {
            if (i >= 1)
            {
                if (abs(sum - 100) < abs(100 - (sum + arr[i])))
                {
                    printf("%d", sum);
                    return 0;
                }
                else
                {
                    printf("%d", sum + arr[i]);
                    return 0;
                }
            }
        }
        sum += arr[i];
    }
    if (sum <= 100)
    {
        printf("%d", sum);
    }
    return 0;
}