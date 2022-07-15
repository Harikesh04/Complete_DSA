#include <bits/stdc++.h>
using namespace std;

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
    if (r == 1)
    {
        for (int i = 0; i < c; i++)
        {
            cout << v[0][i] << " ";
        }
    }
    if (c == 1)
    {
        for (int i = 0; i < r; i++)
        {
            cout << v[i][0] << " ";
        }
    }
    else
    {

        for (int i = 0; i < c; i++)
        {
            cout << v[0][i] << " ";
        }

        for (int i = 1; i < r; i++)
        {
            cout << v[i][c - 1] << " ";
        }

        for (int i = c - 2; i >= 0; i--)
        {
            cout << v[r - 1][i] << " ";
        }

        for (int i = r - 2; i > 0; i--)
        {
            cout << v[i][0] << " ";
        }
    }

    return 0;
}
