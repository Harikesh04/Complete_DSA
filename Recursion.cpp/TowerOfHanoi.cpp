#include<bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n,char A,char B,char C){
    if (n==1)
    {
     cout<<"move 1 from "<<A<<" to "<<C<<endl;
     return;
    }
    towerOfHanoi(n-1,A,C,B);
    cout<<"move "<<n<<" from "<<A <<" to "<<C<<endl;
     towerOfHanoi(n-1,B,A,C);
    
}

int main(int argc, char const *argv[])
{
    int n;cin>>n;
   
    towerOfHanoi(n,'A','B','C');
    return 0;
}