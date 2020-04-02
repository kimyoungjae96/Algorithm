#include <stdio.h>
int testCase;
int r, e, c;
int main()
{
    scanf("%d", &testCase);
    for (int i = 0; i < testCase; i++)
    {
        scanf("%d %d %d", &r, &e, &c);
        if (e - c < r)
        {
            printf("do not advertise\n");
        }
        else if (e - c == r)
        {
            printf("does not matter\n");
        }
        else
        {
            printf("advertise\n");
        }
    }
    return 0;
}