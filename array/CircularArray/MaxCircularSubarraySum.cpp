#include <bits/stdc++.h>
using namespace std;

// Approach :-There are 2 possibility of The maximum subarray sum in circular array

// Maximum subarray sum in non circular array
// If max subarray sum in non circular array then we can simply apply Kadane's Algorithm and we will calculate the max_sum_subarray
// Example A=[-3,-5,3,5,7,3,5,-9] ans= 23
// 2.Maximum subarray sum in circular array.

// If max subarray sum in circular array then we will calculate the minimum sum of subarray and Subtract it from total_sum of array.
// Example A=[11,1,-17,2,-15,9,13]

int maxCircularSubarraySum(int ar[], int n)
{
    int mxSum = INT_MIN, mnSum = INT_MAX, sum = 0, sumTillCurrInd = 0, totalsum = 0;
    for (int i = 0; i < n; i++)
    {
        // calculating max sum in the non circular region using kadane's

        sum += ar[i];
        sum = max(sum, 0);
        mxSum = max(mxSum, sum);

        // calculating min sum in the array

        if (sumTillCurrInd > 0)
            sumTillCurrInd = ar[i]; // there is possibiliy for getting min cur sum;
        else
            sumTillCurrInd += ar[i];
        mnSum = min(mnSum, sumTillCurrInd);

        totalsum += ar[i];
    }

    // cal max sum in circular part
    int circularSum = totalsum - mnSum;

    if (circularSum == 0 && mxSum > 0)
    {
        return mxSum;
    }
    if (circularSum == 0 )
    {
        return *max_element(ar,ar+n);
    }

    return max(circularSum,mxSum);


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
    maxCircularSubarraySum(ar, n);

    return 0;
}