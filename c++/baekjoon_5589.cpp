#include <stdio.h>
int price;
int result;
int main()
{
    scanf("%d", &price);
    price = 1000 - price;
    while (price != 0)
    {
        if (price - 500 >= 0)
        {
            price -= 500;
            result++;
            continue;
        }
        if (price - 100 >= 0)
        {
            price -= 100;
            result++;
            continue;
        }
        if (price - 50 >= 0)
        {
            price -= 50;
            result++;
            continue;
        }
        if (price - 10 >= 0)
        {
            price -= 10;
            result++;
            continue;
        }
        if (price - 5 >= 0)
        {
            price -= 5;
            result++;
            continue;
        }
        if (price - 1 >= 0)
        {
            price -= 1;
            result++;
            continue;
        }
    }
    printf("%d", result);
    return 0;
}