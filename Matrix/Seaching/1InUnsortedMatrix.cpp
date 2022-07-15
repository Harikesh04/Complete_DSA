#include<bits/stdc++.h>
using namespace std;

// here we have to rotate a matrix by 90.

//1. transpose the matrix.
//2.reverse the column of the matrix

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
    int x;cin>>x;
    bool pass=1;
     for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (v[i][j]==x)
            {
               cout<<"Found"<<endl;
               pass=0;
               break;
            }
            
        }
        if (pass==0)
        {
           break;
        }
        
        
    }
    if (pass==1)
    {
       cout<<"Not found"<<endl;
    }
    
    
    
    return 0;
}
