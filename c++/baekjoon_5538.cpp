#include <stdio.h>
int product;
int burgerMin = 3000;
int beverageMin = 3000;

int main()
{
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &product);
        if (burgerMin > product)
        {
            burgerMin = product;
        }
    }
    for (int i = 0; i < 2; i++)
    {
        scanf("%d", &product);
        if (beverageMin > product)
        {
            beverageMin = product;
        }
    }
    printf("%d", burgerMin + beverageMin - 50);
}