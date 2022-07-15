#include <bits/stdc++.h>
using namespace std;

// 2D Array of vector

//here benifit is that row is fixed and column can be of variable size.

// int main(int argc, char const *argv[])
// {

//     int m = 2, n = 2;
//     vector<int> ar[m];

//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             int x;cin>>x;
//             ar[i].push_back(x);
//         }
//     }
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << ar[i][j] << " ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

//2.
//vector of vector

//here rows and column both are versatile 


int main(int argc, char const *argv[])
{
    vector<vector<int>>arr;

    int r,c;
    cin>>r>>c;
    for (int i = 0; i < r; i++)
    {
       vector<int>v;
       for (int j = 0; j < c; j++)
       {
        int x;cin>>x;
         v.push_back(x);
       }
       arr.push_back(v);
       
    }
    for (int i = 0; i < r; i++)
    {
      
       for (int j = 0; j < c; j++)
       {
        cout<<arr[i][j]<<" ";
       }
       cout<<endl;
      
       
    }
    
    return 0;
}
