#include <stdio.h>
#include <string.h>
#include <vector>
using namespace std;
char a[16];
vector<char> b[16];

int main()
{
    for (int i = 0; i < 5; i++)
    {
        scanf("%s", a);
        for (int j = 0; j < strlen(a); j++)
        {
            b[j].push_back(a[j]);
        }
    }

    for (int i = 0; i < 16; i++)
    {
        for (int j = 0; j < b[i].size(); j++)
        {
            printf("%c", b[i][j]);
        }
    }
}