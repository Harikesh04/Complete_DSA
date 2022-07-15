#include <bits/stdc++.h>
using namespace std;
#define ll long long


//this the best method to find the number of traling zeroes in n!.

//cnt= [n/5]+[n/25]+[n/125]+.....

//time complexity:O(logn)

int tralingZeroesCnt(int n)
{

    int cnt = 0;
    for (int i = 5; i <= n; i = i * 5)
    {
        cnt =cnt+ n/i;
    }
    return cnt;
}

int main(int argc, char const *argv[])
{

    cout << tralingZeroesCnt(5)<<endl;
    return 0;
}
