#include <bits/stdc++.h>
using namespace std;

// given an sorted array and an int x you have to find whether the is there any pair in array having sum equal to x.

// naive -

// by using two for loop

// efficient

//two pointer

//t:O(n);

// space : O(1);

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int sum;
    bool pass= 1;
    cin >> sum;
    vector<int> v(n);
   for (int i = 0; i < n; i++)
   {
     cin>>v[i];
   }
   int i=0,j=n-1;
   while (i<j)
   {
     int tsum=0;
     tsum=v[i]+v[j];
     if (tsum==sum)
     {
       cout<<"Yes"<<endl;
       pass=0;
       break;
     }else if (tsum>sum)
     {
        j--;
     }else if (tsum<sum)
     {
       i++;
     }
     
     
   }
   if (pass)
   {
     cout<<"NO"<<endl;
   }
   
  
   
   
    

    return 0;
}
