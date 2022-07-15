#include <bits/stdc++.h>
using namespace std;

//this is the brute force approach.


// int countSetBit(int n){
//     int cnt=0;
//    while (n>0)
//    {
//     if (n&1!=0)
//     {
//         cnt++;
//     }
//     n=n>>1;
    
//    }
//    return cnt;
    
// } timeComp: Q(no.of bits in the number);


// 2.optimised approach
int countSetBit(int n){
int cnt=0;
while (n>0)
{
  n= n &(n-1);
  cnt++;
}
return cnt;

}

// best approach : T: O(no. of set bit).



// this is the brute force approach to find the max sum of the subarray of the array .
int main(int argc, char const *argv[])
{
    int n;cin>>n;
    cout<<countSetBit(n)<<endl;
    return 0;
}
