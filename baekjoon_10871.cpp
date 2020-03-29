
#include <stdio.h>
#include <vector>

using namespace std;
int NumberCnt;
int Standard;
int tempNum;
vector<int> v;

int main()
{
    scanf("%d", &NumberCnt);
    scanf("%d", &Standard);
    for (int i = 0; i < NumberCnt; i++)
    {
        scanf("%d", &tempNum);
        if (tempNum < Standard)
        {
            v.push_back(tempNum);
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        printf("%d ", v[i]);
    }
    return 0;
}