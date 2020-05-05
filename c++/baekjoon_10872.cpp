#include <iostream>

int result = 1;
int input;

int main()
{
    scanf("%d", &input);
    for (int i = 2; i <= input; i++)
    {
        result *= i;
    }
    printf("%d", result);
    return 0;
}