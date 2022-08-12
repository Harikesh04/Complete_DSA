#include <bits/stdc++.h>
using namespace std;


// time com: O(root n);
void PrintDivisors(int n)
{
    int i;
    for ( i = 1; i * i < n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    for (; i >= 1; i--)
    {
        if (n%i==0)
        {
           cout << n/i << " ";
        }
        
    }
    cout<<endl;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    PrintDivisors(n);
    return 0;
}
