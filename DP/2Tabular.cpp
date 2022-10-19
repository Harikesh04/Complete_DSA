#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int fib[N];

// this is tabular / iterative approach 

// bottom up approach.

int main(int argc, char const *argv[])
{

    int n;
    cin >> n;
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    cout<<fib[n]<<endl;

    return 0;
}
