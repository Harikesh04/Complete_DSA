#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int arr[1000]= {-5, 4 ,6,-3,4,-1};
      int maxSum =0,sum=0;
      for (int i = 0; i < 6; i++)
      {
         sum=sum+arr[i];
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

   

    solve();
    return 0;
}