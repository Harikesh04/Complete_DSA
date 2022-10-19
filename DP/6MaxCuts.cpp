#include <bits/stdc++.h>
using namespace std;

// time compl: O(nlogn);

int MaxCuts(int n, int a, int b, int c)
{
    if (n==0)
    {
        return 0;
    }
    if (n<0)
    {
        return -1;
    }
    
    
    int res= max(max(MaxCuts(n - a, a, b, c), MaxCuts(n - b, a, b, c)), MaxCuts(n - c, a, b, c));
    if (res==-1)
    {
        return res;
    }

    return ++res;
    
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int a, b, c;
    cin >> a >> b >> c;
    cout<<MaxCuts(n, a, b, c);

    return 0;
}
