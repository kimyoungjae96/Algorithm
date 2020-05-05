#include <stdio.h>
#include <vector>

using namespace std;

int info[4];
int infoCnt;
vector<char> v;

int main()
{
    for (int j = 0; j < 3; j++)
    {
        infoCnt = 0;
        scanf("%d %d %d %d", &info[0], &info[1], &info[2], &info[3]);
        for (int i = 0; i < 4; i++)
        {
            if (info[i] == 1)
            {
                infoCnt++;
            }
        }
        if (infoCnt == 0)
        {
            v.push_back('D');
        }
        else if (infoCnt == 1)
        {
            v.push_back('C');
        }
        else if (infoCnt == 2)
        {
            v.push_back('B');
        }
        else if (infoCnt == 3)
        {
            v.push_back('A');
        }
        else if (infoCnt == 4)
        {
            v.push_back('E');
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        printf("%c\n", v[i]);
    }
}