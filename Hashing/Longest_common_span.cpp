#include<bits/stdc++.h>
using namespace std;

// here in this problem given  two binary array of same size and we have to tell the max size of  the window which has same sum in both the array and the starting and ending index in both the window should be same.

// crux.

// find the diff betwen the array and create a new array
// then the prob is reduced to find the longest window with sum 0;

int longestSubArrayWithSum(vector<int> ar,int sum){
   int pfsum=0;
   unordered_map<int,int>m;
   int res=0;
   for (int i = 0; i < ar.size(); i++)
   {
      pfsum+=ar[i];
      if (pfsum==0)
      {
         res=i+1;
      }
     else if (m.find(pfsum)==m.end())
      {
        m[pfsum]=i;
      }
      else if (m.find(pfsum)!=m.end())
      {
        res=max(res,i-m[pfsum]);
      }
      
      
      
   }
   return res;
    
}

int main(int argc, char const *argv[])
{
    int n;cin>>n;
    vector<int>v1(n);
    vector<int>v2(n);
    vector<int>ar(n);

    for (int i = 0; i < n; i++)
    {
        cin>>v1[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cin>>v2[i];
    }
    for (int i = 0; i < n; i++)
    {
        ar[i]=v1[i]-v2[i];
    }

    // now the problem is to find the longest subarray with sum equal to zero

    cout<<longestSubArrayWithSum(ar,0);
    
    return 0;
}
