#include <stdio.h>
int a, b, c, d, e, f, g, h;
int main()
{
    scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h);
    if (a + b + c + d > e + f + g + h)
    {
        printf("%d", a + b + c + d);
    }
    else
    {
        printf("%d", e + f + g + h);
    }
}