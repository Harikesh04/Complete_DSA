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
    int top = 0, bottom = r - 1, right = c - 1, left = 0;

    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            cout << v[top][i] << " ";
        }

        top++;
        for (int i = top; i <= bottom; i++)
        {
            cout << v[i][right] << " ";
        }

        right--;
        if (top <= bottom)
        {

            for (int i = right; i >= left; i--)
            {
                cout << v[bottom][i] << " ";
            }

            bottom--;
        }
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout << v[i][left] << " ";
            }

            left++;
        }
    }

    return 0;
}
