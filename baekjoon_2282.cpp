#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
vector<pair<int, int>> score;
vector<int> v1;
int scoreVal;
int sum;

int main()
{
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &scoreVal);
        score.push_back(make_pair(scoreVal, i));
    }

    sort(score.begin(), score.end());
    for (int i = 3; i < 8; i++)
    {
        sum += score[i].first;
        v1.push_back(score[i].second);
    }
    sort(v1.begin(), v1.end());
    printf("%d\n", sum);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", v1[i] + 1);
    }
    return 0;
}