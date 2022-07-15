#include <bits/stdc++.h>
using namespace std;

// 1. first approach

// using two for loop . O(N^2).

// 2.best approach
//  traverse from last


//more easier approach
void StockBuyAndSell(int ar[], int n)
{
    int pf = 0;
    for (int i = 0; i < n-1; i++)
    {
        if (ar[i + 1] > ar[i])
        {
            pf+=(ar[i+1]-ar[i]);
        }
       
        
    }
    cout << pf << endl;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    StockBuyAndSell(ar, n);

    return 0;
}
