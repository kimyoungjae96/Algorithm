#include <stdio.h>
int student[31];
int studentNum;
int main()
{
    for (int i = 0; i < 28; i++)
    {
        scanf("%d", &studentNum);
        student[studentNum] = 1;
    }
    for (int i = 1; i <= 30; i++)
    {
        if (student[i] == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}