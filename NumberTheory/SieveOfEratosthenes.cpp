#include <bits/stdc++.h>
using namespace std;

//this algorith is used to print all the prime factor of a number.

//time complexity O(nloglogn).
void SieveOfEra(int n)
{
    bool ar[n + 1];
    memset(ar, true, n + 1);
    for (int i = 2; i * i <= n; i++)
    {
        if (ar[i] == true)
        {
            for (int j = i * 2; j <= n; j = j + i)
            {
                ar[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (ar[i])
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    SieveOfEra(n);
    return 0;
}
