#include <bits/stdc++.h>
using namespace std;

// if characters in string 1 is same in string 2 then the string are anagram irrespective of the order.
// app1: sort the strings then compare if s1==s2 true else false. O(nlogn)

// app2: using hashing

int main(int argc, char const *argv[])
{
    string s1, s2;
    cin >> s1 >> s2;
    int ar[256] = {0}; // since the ascii value of all the know int is <=256
    if (s1.size() != s2.size())
    {
        cout << "No" << endl;
    }
    else
    {
        for (int i = 0; i < s1.size(); i++)
        {
            ar[s1[i]]++;
            ar[s2[i]]--;
        }
        int pass = 1;
        for (int i = 0; i < 256; i++)
        {
            if (ar[i] != 0)
            {
                pass = 0;
                break;
            }
        }
        if (pass)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
