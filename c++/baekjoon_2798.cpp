#include <stdio.h>

int cardNum, targetNum, cardVal;
int cardInfo[101];
bool select[101];
int sum;
int max_sum = 0;
void calculate(int idx, int cnt)
{
    if (cnt == 3)
    {
        sum = 0;
        for (int i = 0; i < cardNum; i++)
        {
            if (select[i] == true)
            {
                sum += cardInfo[i];
            }
        }
        if (max_sum <= sum && sum <= targetNum)
        {
            max_sum = sum;
        }
        return;
    }
    for (int i = idx; i < cardNum; i++)
    {
        if (select[i] == true)
            continue;
        select[i] = true;
        calculate(i, cnt + 1);
        select[i] = false;
    }
}
int main()
{
    scanf("%d %d", &cardNum, &targetNum);
    for (int i = 0; i < cardNum; i++)
    {
        scanf("%d", &cardVal);
        cardInfo[i] = cardVal;
    }
    calculate(0, 0);
    printf("%d", max_sum);
}