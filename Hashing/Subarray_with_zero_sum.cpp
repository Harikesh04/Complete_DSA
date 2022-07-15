#include <bits/stdc++.h>
using namespace std;

//here given an array we have to find whether there exist an subarray which have sum =0 if yes
//print yes else no. 

// approach prifix sum and hashing


int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> v(n);
    int ar[n];
    unordered_map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ar[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        ar[i] = ar[i - 1] + v[i];
        if (ar[i]==0)
        {
           cout<<"YES"<<endl;
           return 0;
        }
        
        m[ar[i]]++;
    }

    bool pass = 1;

    for (auto it : m)
    {
        
        
        if (it.second > 1)
        {
            cout << "YES" << endl;
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
