#include <stdio.h>
#include <math.h>
int prime[300000];
int input = 1;
int result;
int endVal;
int main()
{
    for (int i = 0; i < 300000; i++)
    {
        prime[i] = 1;
    }
    prime[1] = 0;

    for (int j = 2; j < 300000; j++)
    {
        if (prime[j] == 0)
        {
            continue;
        }
        for (int i = j + j; i < 300000; i += j)
        {
            prime[i] = 0;
        }
    }

    while (input != 0)
    {
        result = 0;
        scanf("%d", &input);
        if (input == 0)
        {
            return 0;
        }
        for (int i = input + 1; i <= input * 2; i++)
        {
            if (prime[i] == 1)
            {
                result += 1;
            }
        }

        printf("%d\n", result);
    }

    return 0;
}