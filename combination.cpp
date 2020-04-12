#include <iostream>
using namespace std;
int Arr[5];
bool Select[5];
void dfs(int n, int k)
{
    if (k == 3)
    {

        for (int i = 0; i < 5; i++)
        {
            if (Select[i] == true)
            {
                cout << Arr[i];
            }
        }
        cout << endl;
        return;
    }

    for (int i = n; i < 5; i++)
    {
        if (Select[i] == true)
            continue;
        Select[i] = true;
        dfs(i, k + 1);
        Select[i] = false;
    }
}
int main()
{
    for (int i = 0; i < 5; i++)
    {
        Arr[i] = i + 1;
    }

    dfs(0, 0);
}