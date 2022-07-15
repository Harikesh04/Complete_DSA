#include<bits/stdc++.h>
#define ll long long
using namespace std;

// print max sum subarray of size k {window size is given}
int main(int argc, char const *argv[])
{
    int n =7;
    int ar[n]={2,5,1,8,2,9,1};
    int k =3;
    int i=0,j=0;
    ll mx=INT_MIN;
    ll sum=0;
    while (j<n)
    {
      sum=sum+ar[j];
      if ((j-i+1)<k)//when window size is less than key
      {
         j++;
      }
      else if ((j-i+1)==k)// when window size is equal to key
      {
         mx= max(mx,sum);
        sum=sum-ar[i];//removing the ith block for  new window
        i++;//sliding the window
        j++;

      }
      
       
    }
    cout<<mx<<endl;
    

    return 0;
}
