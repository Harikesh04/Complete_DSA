#include <bits/stdc++.h>
using namespace std;

int RopeCutting(int n, int a, int b, int c)
{
    if (n == 0)
    {
        return 0;
    }
    if (n < 0)
    {
        return -1;
    }
    int res = max(RopeCutting(n - a, a, b, c), (RopeCutting(n - b, a, b, c), RopeCutting(n - c, a, b, c)));
    if (res == -1)
    {
        return -1;
    }
    return res + 1;
}

int main(int argc, char const *argv[])
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    cout << RopeCutting(n, a, b, c) << endl;

    return 0;
}
