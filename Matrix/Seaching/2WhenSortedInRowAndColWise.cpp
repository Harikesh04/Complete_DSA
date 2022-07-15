#include <bits/stdc++.h>
using namespace std;

// here our matrix is sorted in row wise and colum wise both

// 1 2 3
// 4 5 6
// 7 8 9


// time complexity: O(r+c);
int main(int argc, char const *argv[])
{
    int r, c;
    cin >> r >> c;
    vector<int> v[r];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    int x;
    cin >> x;
    bool pass = 1;
    int i = 0, j = c - 1;
    while (i < r && j >= 0)
    {
        if (v[i][j] == x)
        {
            cout << "found" << endl;
            pass = 0;
            break;
        }
        else if (v[i][j] > x)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    if (pass)
    {

        cout << "Not found" << endl;
    }

    return 0;
}
