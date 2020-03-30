#include <iostream>
int num;
int cuteNum;
int uncuteNum;
int cuteInfo;
int main()
{
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &cuteInfo);
        if (cuteInfo == 1)
        {
            cuteNum++;
        }
        else if (cuteInfo == 0)
        {
            uncuteNum++;
        }
    }
    if (cuteNum > uncuteNum)
    {
        printf("Junhee is cute!");
    }
    else
    {
        printf("Junhee is not cute!");
    }
}