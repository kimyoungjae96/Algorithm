#include <stdio.h>
int n, k;
int dp[1001][1001];
int main()
{
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (j == 0 || j == i)
            {
                dp[i][j] = 1;
                if (i == j)
                {
                    break;
                }
            }
            else
            {
                dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1]) % 10007;
            }
        }
    }
    printf("%d", dp[n][k]);
    /*
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 0; j <= 10; j++)
        {
            printf("%d", dp[i][j]);
        }
        printf("\n");
    }
    */

    return 0;
}