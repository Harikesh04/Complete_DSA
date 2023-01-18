#include <bits/stdc++.h>
using namespace std;

int minSubarraySum(int ar[], int n)
{
    int mnSum = INT_MAX, sumTillCurrInd = 0;
    for (int i = 0; i < n; i++)
    {
        // calculating min sum in the array

        if (sumTillCurrInd > 0)
            sumTillCurrInd = ar[i]; // there is possibiliy for getting min cur sum;
        else
            sumTillCurrInd += ar[i]; // here we got -ve ele so now we can add more ele in window because we have already saved the minSumTillCurInd in mnsum.
        mnSum = min(mnSum, sumTillCurrInd);
    }

    return mnSum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    minSubarraySum(ar, n);

    return 0;
}