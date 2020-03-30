#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long a, b, c;
int cnt[10];
char s[25];
int main()
{
    scanf("%lld %lld %lld", &a, &b, &c);
    sprintf(s, "%lld", a * b * c);
    for (int i = 0; i < strlen(s); i++)
    {
        cnt[s[i] - '0']++;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d \n", cnt[i]);
    }
}