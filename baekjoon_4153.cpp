#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int beon[3];
bool compare(int a, int b)
{
    return a > b;
}
int main()
{
    while (1)
    {
        scanf("%d %d %d", &beon[0], &beon[1], &beon[2]);
        if (beon[0] == 0 && beon[1] == 0 && beon[2] == 0)
        {
            return 0;
        }
        sort(beon, beon + 3, compare);
        if (beon[0] == sqrt(pow(beon[1], 2) + pow(beon[2], 2)))
        {
            printf("right\n");
        }
        else
        {
            printf("wrong\n");
        }
    }
    return 0;
}
