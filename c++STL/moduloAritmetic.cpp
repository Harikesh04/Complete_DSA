#include <bits/stdc++.h>
using namespace std;

//Rules 
// (a+b)%M=((a%M)+(b%M))%M;
// (a-b)%M=((a%M)-(b%M))%M;
// (a*b)%M=((a%M)*(b%M))%M;
// (a/b)%M=((a%M)*((b^-1)%M))%M;

int main(int argc, char const *argv[])
{
    //PRINTING THE FACTORIAL OF A NUMBER %M

    int n;cin>>n;
    int M=47;
    long long fact =1;
    for (int i = 1; i <= n; i++)
    {
        fact=(fact*i)%M;
    }
    cout<<fact%M<<endl;
    cout<<fact<<endl;

    //both are equal.

    //same applicable on addition and subtraction apply the same at each step while adding 
    //and subtracting.
    
    return 0;
}
