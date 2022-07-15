#include <bits/stdc++.h>
using namespace std;

//here the concept is we will check whether left part is sorted or not . if sorted then we will check whether out x will lie in the range of it or not . if it lie then we will go to left else we will go right .

// viceverca in right side

int firstOcc(vector<int> v, int x)
{
    int n = v.size();
    int s = 0, e = n - 1;
    while (s <= e)
    {

        int mid = (s + e) / 2;
        if (v[mid] == x)
        {
            return mid;
        }
        else if (v[mid] > v[0])
        {
            if (x >= v[0] && x <= v[mid])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        else if (v[mid]<v[n-1])
        {
            if (x >= v[mid] && x <= v[n-1])
            {
                s = mid + 1;
               
            }
            else
            {
                e = mid - 1;
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
    cout << firstOcc(v, x);
    return 0;
}
