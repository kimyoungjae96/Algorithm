#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int countryCnt;
int selectNum;
int gold, silver, bronze, countryNum;
int prevGold, prevSilver, prevBronze, rankCnt, prevCnt = 1;
class Country
{
public:
    int gold;
    int silver;
    int bronze;
    int countryNum;
    Country()
    {
        this->countryNum = 0;
        this->gold = 0;
        this->silver = 0;
        this->bronze = 0;
    };
    Country(int gold, int silver, int bronze, int countryNum)
    {
        this->countryNum = countryNum;
        this->gold = gold;
        this->silver = silver;
        this->bronze = bronze;
    };
    bool operator<(const Country &country) const
    {
        if (country.gold == this->gold)
        {
            if (country.silver == this->silver)
            {
                return this->bronze > country.bronze; //동메달 큰 거를 리턴
            }
            else
            {
                return this->silver > country.silver; //은메달 큰 거를 리턴
            }
        }
        else
        {
            return this->gold > country.gold; //금메달 큰 거를 리턴
        }
    }
};

int main()
{
    Country country[1001];
    scanf("%d %d", &countryCnt, &selectNum);
    for (int i = 0; i < countryCnt; i++)
    {
        scanf("%d %d %d %d", &countryNum, &gold, &silver, &bronze);
        country[i].countryNum = countryNum;
        country[i].gold = gold;
        country[i].silver = silver;
        country[i].bronze = bronze;
        //index가 바뀐다?
    }

    sort(country, country + countryCnt);
    for (int i = 0; i < countryCnt; i++)
    {
        if (prevGold == country[i].gold && prevSilver == country[i].silver && prevBronze == country[i].bronze)
        {
            prevCnt++;
        }
        else
        {
            rankCnt += prevCnt;
            prevCnt = 1;
        }
        prevGold = country[i].gold;
        prevSilver = country[i].silver;
        prevBronze = country[i].bronze;
        if (selectNum == country[i].countryNum)
        {
            printf("%d", rankCnt);
            return 0;
        }
    }
    return 0;
}