#include <iostream>
#include <vector>

using namespace std;
long long result[100], answer;
int n, k;

long long fibo(int n)
{
    result[0] = 1;
    result[1] = 1;
    if (result[n] > 0)
        return result[n];
    if ((n == 0) || (n == 1))
        return result[n];
    return result[n] = fibo(n - 1) + fibo(n - 2);
}
long long solution(int N)
{
    fibo(N);
    if (N == 1)
    {
        return 4;
    }
    else if (N == 2)
    {
        return 6;
    }
    else
    {
        answer = (2 * result[N - 1] + result[N - 2]) * 2;
        return answer;
    }
}

int main()
{
    long long text = solution(70);
    cout << text;
}