#include <bits/stdc++.h>
using namespace std;

//--PEAK ELEMENT --index

//1. whether ele should be greater then its left and right ele

//2. right most or left most ele is peak if it is greater then its front one ,back one respectively.

//here concept is if mid is peak then good return it.

// else if element before the mid is greater then mid then peak will definately lye on left else we will go right.


int findPeak(vector<int> v)
{
    int n = v.size();
    int s = 0, e = n - 1;
    while (s <= e)
    {

        int mid = (s + e) / 2;
        if (mid==0 && v[mid+1]<=v[mid])
        {
            return mid;
        }else if (mid==n-1 && v[mid-1]<=v[mid])
        {
           return mid;
        }
        else if (v[mid]>=v[mid+1] && v[mid]>=v[mid-1])
        {
           return mid;
        }
        else if (mid >0 && v[mid-1]>=v[mid])
        {
           e=mid-1;
        }else{
            s=mid+1;
        }
        
        
       
    }
    return -1;
}

int main(int argc, char const *argv[])
{

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    cout << findPeak(v);
    return 0;
}
