#include <iostream>
#include <vector>
using namespace std;
int testCase, coinType, coinVal, targetMoney, answer; // 테스트 수, 돈 종류 수, 돈 값, 목표 돈
vector<int> coin;
void dp(vector<int> coin, int targetMoney)
{
    for (int i = 0; i < coin.size(); i++)
    {
        dp(coin, targetMoney);
    }
}
int main()
{
    scanf("%d", &testCase);
    for (int i = 0; i < testCase; i++)
    {
        scanf("%d", &coinType);
        for (int j = 0; j < coinType; j++)
        {
            scanf("%d", &coinVal);
            coin.push_back(coinVal);
        }
        scanf("%d", &targetMoney);
        dp(coin, targetMoney);
    }
    return 0;
}