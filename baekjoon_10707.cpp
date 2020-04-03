#include <stdio.h>
int a, b, c, d, e;
int val[2];
int main()
{
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    val[0] = e * a;
    val[1] = b;
    if (e > c)
    {
        val[1] += (e - c) * d;
    }
    if (val[0] > val[1])
    {
        printf("%d", val[1]);
    }
    else
    {
        printf("%d", val[0]);
    }
    return 0;
}