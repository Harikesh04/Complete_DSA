#include<bits/stdc++.h>
using namespace std;

//1. make a 2d temp array and then store value in transpose form.

//2. since when we see the diagonal elements do not change only upward and downward ele gets swaped 

int main(int argc, char const *argv[])
{
    int r,c;cin>>r>>c;
    vector<int>v[r];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int x;cin>>x;
            v[i].push_back(x);
        }
        
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = i+1; j < c; j++)
        {
            swap(v[i][j],v[j][i]);
        }
        
    }
     for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    
    return 0;
}
