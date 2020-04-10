#include <stdio.h>
#include <string.h>

char a[101];
char b[101];
char operatorType;
char result[201];
int idx = 1;
int main()
{
    scanf("%s %c %s", a, &operatorType, b);
    if (a[0] == '0' && b[0] == '0')
    {
        printf("0");
        return 0;
    }
    if (operatorType == '*')
    {
        if (a[0] == '0' || b[0] == '0')
        {
            printf("0");
            return 0;
        }
        result[0] = '1';
        for (int i = 1; i < strlen(a) + strlen(b) - 1; i++)
        {
            result[i] = '0';
        }
    }
    else
    {
        if (strlen(a) == strlen(b))
        {
            result[0] = '2';
            for (int i = 1; i < strlen(b); i++)
            {
                result[i] = '0';
            }
        }
        else
        {
            if (strlen(a) > strlen(b))
            {
                for (int i = 0; i < strlen(a); i++)
                {
                    result[i] = a[i];
                }
                result[strlen(a) - strlen(b)] = b[0];
            }
            else
            {
                for (int i = 0; i < strlen(b); i++)
                {
                    result[i] = b[i];
                }
                result[strlen(b) - strlen(a)] = a[0];
            }
        }
    }
    for (int i = 0; i < strlen(result); i++)
    {
        printf("%c", result[i]);
    }
    return 0;
}