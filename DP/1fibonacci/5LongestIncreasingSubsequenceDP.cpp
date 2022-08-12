#include <bits/stdc++.h>
using namespace std;

// time complexity O(N^2),
//space complexity O(N);

int LIS(int ar[], int n)
{
    int LIS[n];
    LIS[0] = 1;
    for (int i = 1; i < n; i++)
    {
        LIS[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (ar[j] < ar[i])
            {
                LIS[i] = max(LIS[i], LIS[j] + 1);
            }
        }
    }

    int res=0;
    for (int i = 0; i < n; i++)
    {
       res=max(res,LIS[i]);
    }
   return res;
    
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
    cout << LIS(ar, n);

    return 0;
}
