#include <stdio.h>
int a, b, c, d;
int main()
{
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d\n", (a + b + c + d) / 60);
    printf("%d", (a + b + c + d) % 60);
    return 0;
}