#include <bits/stdc++.h>
using namespace std;

// given an array of coins and a sum we have to find the total number of combinations of sum using the coins from the array to make the given sum

// {1,2,3} , sum=5;

// Recursive Approach
// whether we will take the element in our sum or not .

//Time Compl : O(2^N);

int CoinChange(int ar[],int n,int sum){

    if (sum==0)
    {
        return 1;
    }
    if (sum<0)
    {
        return 0;
    }
    
    if (n<=0)
    {
        return 0;
    }
    
    
    return (CoinChange(ar,n-1,sum)+CoinChange(ar,n,sum-ar[n-1]));
    //  (CoinChange(ar,n-1,sum)  { here not included the coin}                                  +CoinChange(ar,n,sum-ar[n-1])) { here included the coin but since we have infinite coin of each type there for we have not reduced the number of coin , and sum-ar[n-1] since, arr is 0 based indexed};
}
int main(int argc, char const *argv[])
{

    int n,sum;
    cin >> n>>sum;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
   cout<< CoinChange(ar,n,sum);

    return 0;
}
