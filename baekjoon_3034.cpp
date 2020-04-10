#include <stdio.h>
#include <math.h>

int a, b, c;
int chk;
int main()
{
    scanf("%d %d %d", &a, &b, &c);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &chk);
        if (chk <= sqrt(pow(b, 2) + pow(c, 2)))
        {
            printf("DA\n");
        }
        else
        {
            printf("NE\n");
        }
    }
    return 0;
}