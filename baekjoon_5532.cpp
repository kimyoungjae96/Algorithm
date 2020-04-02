#include <stdio.h>
#include <math.h>
float A, B, C, D;
int maxVal, L;
int main()
{
    scanf("%d %f %f %f %f", &L, &A, &B, &C, &D);
    if (ceil(A / C) > ceil(B / D))
    {
        maxVal = int(ceil(A / C));
    }
    else
    {
        maxVal = int(ceil(B / D));
    }
    printf("%d", L - maxVal);
    return 0;
}
