#include <stdio.h>

int peopleNum;
int count[27];
char name[31];
int chk;
int main()
{

    scanf("%d", &peopleNum);
    for (int i = 0; i < peopleNum; i++)
    {
        scanf("%s", name);
        count[name[0] - 'a']++;
    }
    for (int i = 0; i <= 26; i++)
    {
        if (count[i] >= 5)
        {
            chk = 1;
            printf("%c", i + int('a'));
        }
    }

    if (chk == 0)
    {
        printf("PREDAJA");
    }
    return 0;
}