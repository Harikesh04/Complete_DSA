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
    //transposing the matrix
    for (int i = 0; i < r; i++)
    {
        for (int j = i+1; j < c; j++)
        {
            swap(v[i][j],v[j][i]);
        }
        
    }

    // reversing the column of the matrix

    for (int i = 0; i < r; i++)
    {
        int lo=0,high=r-1;
        while (lo<high)
        {
            swap(v[lo][i],v[high][i]);
            lo++;
            high--;
        }
        

    }
    
    
    
    return 0;
}
