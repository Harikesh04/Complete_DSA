#include <bits/stdc++.h>
using namespace std;

// given an array find the only no. which occured odd number of times in the array.
// int main(int argc, char const *argv[])
// {
//     int n;cin>>n;
//     vector<int>v(n);
//     int res=0;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>v[i];
//         res=res^v[i];
//     }
//     cout<<res<<endl;

    
    

//     return 0;
// }

//find the missing number in the array in range of [1...n+1];
int main(int argc, char const *argv[])
{
    int n;cin>>n;
    vector<int>v(n);
    int res=0;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        res=res^v[i];
    }
   for (int i = 1; i <= n+1; i++)
   {
    res=res^i;
   }
   cout<<res<<endl;
   

    
    

    return 0;
}
