#include <stdio.h>
#include <vector>
using namespace std;
int friendNum;
int friendShip;
int chk[501];
int firstPeople, secondPeople;
int temp;
int result;
vector<int> v[501];
int main()
{
    scanf("%d %d", &friendNum, &friendShip);
    for (int i = 0; i < friendShip; i++)
    {
        scanf("%d %d", &firstPeople, &secondPeople);
        if (secondPeople < firstPeople)
        {
            temp = firstPeople;
            firstPeople = secondPeople;
            secondPeople = temp;
        }
        v[firstPeople].push_back(secondPeople);
        v[secondPeople].push_back(firstPeople);
    }

    for (int i = 0; i < v[1].size(); i++)
    {
        if (v[1][i] != 1)
        {
            chk[v[1][i]] = 1;
        }
        for (int j = 0; j < v[v[1][i]].size(); j++)
        {
            if (chk[v[v[1][i]][j]] != 1)
            {
                chk[v[v[1][i]][j]] = 1;
            }
        }
    }
    for (int i = 2; i <= 500; i++)
    {
        if (chk[i] == 1)
        {
            result++;
        }
    }
    printf("%d", result);
    return 0;
}