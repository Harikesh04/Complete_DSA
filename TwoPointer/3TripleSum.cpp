#include <bits/stdc++.h>
using namespace std;

// given an sorted array and an integer x you have to find whether the sum of 3 element equal to x exists in the array or not .

// naive -

// by using three for loop

// efficient

// two pointer

// t:O(n2);

// space : O(1);

// if it will given for unordered array then we will find two sum using map.



bool twoSum(vector<int>v,int sum){
    int n=v.size();
     int i=0,j=n-1;
   while (i<j)
   {
     int tsum=0;
     tsum=v[i]+v[j];
     if (tsum==sum)
     {
       
       return true;
       break;
     }else if (tsum>sum)
     {
        j--;
     }else if (tsum<sum)
     {
       i++;
     }
     
     
   }
   return false;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int sum;
    bool pass = 1;
    cin >> sum;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        int x = sum - v[i];
        if (twoSum(v, x))
        {
            cout << "Yes" << endl;
            pass = 0;
            break;
        }
    }

    if (pass)
    {
        cout << "NO" << endl;
    }

    return 0;
}
