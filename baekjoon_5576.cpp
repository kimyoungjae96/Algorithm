#include <stdio.h>
#include <algorithm>

using namespace std;
int w[10];
int k[10];
int wSum;
int kSum;
bool desc(int a, int b)
{
    return a > b;
}
int main()
{
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &w[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &k[i]);
    }

    sort(w, w + 10, desc);
    sort(k, k + 10, desc);

    for (int i = 0; i < 3; i++)
    {
        wSum += w[i];
    }
    for (int i = 0; i < 3; i++)
    {
        kSum += k[i];
    }
    printf("%d %d", wSum, kSum);
    return 0;
}