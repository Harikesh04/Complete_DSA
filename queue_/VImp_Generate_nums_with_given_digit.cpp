#include <bits/stdc++.h>
using namespace std;

// here given a problem in which we have to print n numbers (in sorted order ) such that all the  numbers in that contains only digit 5 and 6

// e.g- 5 6 55 56 65 66 555 556 655 656 so on.

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    queue<string> q;
    q.push("5");
    q.push("6");

    for (int i = 0; i < n; i++)
    {
        string cur = q.front();
        cout << cur << " ";
        q.pop();
        q.push(cur + "5");
        q.push(cur + "6");
    }

    return 0;
}
