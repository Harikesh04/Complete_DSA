#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string s1, s2;
    cin >> s1 >> s2;
    string s = "";

    for (int i = 0; i < s1.length() - s2.length() + 1; i++)
    {

        s += s1.substr(i, s2.size());

        if (s == s2)
        {
            cout << i << " ";
        }
        s.clear();
    }
    cout << endl;

    return 0;
}

// TC:O((n+m-1)*m);
