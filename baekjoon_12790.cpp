#include <stdio.h>
int testCase;
int temp[8];
int hp;
int mp;
int power;
int main()
{
    scanf("%d", &testCase);
    for (int i = 0; i < testCase; i++)
    {
        scanf("%d %d %d %d %d %d %d %d", &temp[0], &temp[1], &temp[2], &temp[3], &temp[4], &temp[5], &temp[6], &temp[7]);
        if (temp[0] + temp[4] < 1)
        {
            hp = 1;
        }
        else
        {
            hp = temp[0] + temp[4];
        }
        if (temp[1] + temp[5] < 1)
        {
            mp = 1;
        }
        else
        {
            mp = temp[1] + temp[5];
        }
        if (temp[2] + temp[6] < 0)
        {
            power = 0;
        }
        else
        {
            power = temp[2] + temp[6];
        }
        printf("%d\n", hp + (mp * 5) + ((temp[3] + temp[7]) * 2) + (power * 2));
    }
}
