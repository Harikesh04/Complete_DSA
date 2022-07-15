#include <bits/stdc++.h>
using namespace std;

int lastOcc(vector<int> v, int x)
{
    int n=v.size();
    int s = 0, e = n - 1;
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
        else
        {
            if (mid == n-1 || v[mid] != v[mid + 1])
            {
                return mid;
            }
            else
            {
                s = mid + 1;
            }
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
    cout << lastOcc(v, x);
    return 0;
}
