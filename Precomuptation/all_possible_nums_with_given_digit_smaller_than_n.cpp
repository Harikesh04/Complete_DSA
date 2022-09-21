#include <bits/stdc++.h>
using namespace std;

// here given a problem in which we have to print n numbers (in sorted order ) such that all the  numbers in that contains only digit 5 and 6

// e.g- 5 6 55 56 65 66 555 556 655 656 so on.

int main(int argc, char const *argv[])
{
    vector<string> v(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> v[i];
    }
    int n;
    cin >> n;

    queue<string> q;
    for (int i = 0; i < v.size(); i++)
    {
        q.push(v[i]);
    }
    int res = 0;
int i=0;
    while (i <= n)
    {

        string cur = q.front();
        cout << cur << endl;
        res++;
        q.pop();
        for (int i = 0; i < v.size(); i++)
        {
           
            q.push(cur+v[i]);
        }
        i++;
    }

    return 0;
}
