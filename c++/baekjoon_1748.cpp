#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
long long sumVal = 0;
long long num;
long long tempNum;
long long i = 1;
long long j = 1;
long long jarisu;
int main()
{
    scanf("%lld", &num);
    tempNum = num;
    while (tempNum > 0)
    {
        tempNum = tempNum / 10;
        jarisu++;
    }
    sumVal += (num - (pow(10, jarisu - 1) - 1)) * jarisu;
    jarisu--;

    while (jarisu > 0)
    {
        sumVal += (jarisu * pow(10, jarisu - 1) * 9);
        jarisu--;
    }

    printf("%lld", sumVal);
    return 0;
}

//1~9 9개
//10~99 90개 *2
//100~999 900개 *3
//1000~9999 9000개 *4
//1000~99999 90000개 *5
//~ 90만개 *6
