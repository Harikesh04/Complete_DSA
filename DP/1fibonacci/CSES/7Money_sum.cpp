#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<bool> possible(1e5+1, false);

    possible[0] = true;

    for (int i = 1; i <= n; i++)
    {
        vector<bool> current(1e5+1, false);
        int currvalue = v[i - 1];
        for (int j = 0; j <= 1e5; j++)
        {
            if (possible[j])
            {
                current[j] = true;
                current[j + currvalue] = true;
            }
        }
        possible = current;
    }
    int res=0;
    for (int i = 1; i <= 1e5; i++)
    {
        if (possible[i])
        {
            res++;
        }
    }
    cout<<res<<endl;

    for (int i = 1; i <= 1e5; i++)
    {
        if (possible[i])
        {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
