#include <bits/stdc++.h>
using namespace std;

void maxCircularSubarraySum(int ar[],int n)
{
    
      int maxSum =0,sum=0;
      for (int i = 0; i < n+n-1; i++)
      {
         sum=sum+ar[i%n];
         sum=max(0,sum);
         maxSum = max(maxSum,sum);
      }
      cout<<maxSum<<endl;
      

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    maxCircularSubarraySum(ar,n);

   

   
    return 0;
}