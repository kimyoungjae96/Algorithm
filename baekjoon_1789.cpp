#include <iostream>
#include <cmath>
using namespace std;
long long number;
long long n;
long long result;
int main()
{
    scanf("%ld", &number);
    result = (-1 + sqrt(1 + 8 * number)) / 2;
    cout << floor(result);
}
//문제 분류 구현