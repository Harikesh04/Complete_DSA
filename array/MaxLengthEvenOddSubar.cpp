#include <bits/stdc++.h>
using namespace std;

void solve(int ar[],int n)
{
    
      int maxLen =1,len=1;
      int pv=ar[0]%2;
      for (int i = 1; i < n; i++)
      {
        int nw=ar[i]%2;
         if (pv!=nw)
         {
            len++;
            pv=nw;
         }else{
            pv=nw;
            len=1;
         }
         maxLen=max(maxLen,len);
         
      }
      cout<<maxLen<<endl;
      

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
    solve(ar,n);

   

   
    return 0;
}