#include <bits/stdc++.h>
using namespace std;

int Search(vector<int> v, int x)
{
    int n = v.size();
    int s = 0, e = 1;
    if (x == v[s])
    {
        return s;
    }
    else
    {
        while (v[e] < x)
        {
            if (v[e]==x)
            {
               return e;
            }
            
            s = e;
            e = e * 2;
        }
    }

    while (s <= e)
    {

        int mid = (s + e) / 2;
        if (v[mid] > x)
        {
            e = mid - 1;
        }
        else if (v[mid] < x)
        {
            s = mid + 1;
        }
        else if (v[mid] == x)
        {
            return mid;
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
    int x;
    cin >> x;
   cout<< Search(v, x);
    return 0;
}
