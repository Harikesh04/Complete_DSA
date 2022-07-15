#include <bits/stdc++.h>
using namespace std;

// given an unsorted array and an int x you have to find whether the is there any pair in array having sum equal to x.

// naive -

// by using two for loop

// efficient

// since unsorted therefore by using map

//t:O(n);

//space complexity O(n);

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int sum;
    bool pass= 1;
    cin >> sum;
    vector<int> v(n);
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        auto it = m.find(sum - v[i]);
        if (it != m.end())
        {
            cout << "Yes" << endl;
            pass=0;
            break;
        }
        m[v[i]]++;
    }
    if (pass)
    {
        cout<<"NO"<<endl;
       
    }
    

    return 0;
}
