#include <bits/stdc++.h>
using namespace std;

// here 1.Approach
//here we precumputed lpf sum and rpf sum and then compare if lpf== rpf that is the equill point.
//O(n).
void eqillPoint(int ar[], int n)
{
    int lpf[n],rpf[n];
    lpf[0]=0;
    rpf[n+1]=0;
    for (int i = 1; i <= n; i++)
    {
       lpf[i]=ar[i]+lpf[i-1];
    }
    for (int i = n; i >0; i--)
    {
       rpf[i]=rpf[i+1]+ar[i];
    }

    for (int i = 1; i <=n; i++)
    {
       if (lpf[i]==rpf[i])
       {
         cout<<"Equillibrium point is "<<i<<endl;
       }
       
    }
    
    
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int ar[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> ar[i];
    }
    eqillPoint(ar, n);

    return 0;
}