#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int memo[N];

int fibonacci(int n)
{
    int res;
    if (memo[n] == -1)
    {
        if (n == 0 || n == 1)
        {
            res = n;
        }
        else
        {
            res = fibonacci(n - 1) + fibonacci(n - 2);
        }
        memo[n] = res;
    }
    return memo[n];
}

int main(int argc, char const *argv[])
{
    for (int i = 0; i < N; i++)
    {
        memo[i] = -1;
    }
    int n;
    cin >> n;
    cout << fibonacci(n);

    return 0;
}
