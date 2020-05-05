#include <stdio.h>
#include <vector>
#include <string>
using namespace std;
int n;
long long twochinsu[91][2];
int main()
{
    scanf("%d", &n);
    twochinsu[1][0] = 0;
    twochinsu[1][1] = 1;

    for (int i = 2; i <= 90; i++)
    {
        twochinsu[i][0] = twochinsu[i - 1][0] + twochinsu[i - 1][1];
        twochinsu[i][1] = twochinsu[i - 1][0];
    }
    printf("%lld", twochinsu[n][0] + twochinsu[n][1]);
    return 0;
}