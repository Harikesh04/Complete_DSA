#include<bits/stdc++.h>
using namespace std;

//one approach we have studied is by bit manipution  

//since here indexing of people is 0 1 2 3 4.. n-1.
//what we are doing?
//1.since in recurion we assume we know the sol for less then n-1 (choti probelm k liye).
//2. when only 1 soldier were remaing the index 0 solider will be left. therefore return 0.
//3. since we notised that after each killing the sword is pass on to the next soldier therefore , the index of each number is shifted by k. therefore we added k.
//4. since we don't want the index of soldiers to be cross n . therefore %n.
int JP(int n,int k){
    
    if (n==1)//when
    {
       return 0;
    }
return (JP(n-1,k)+k)%n;
    
}



int main()
{
    int n,k;cin>>n>>k;
    cout<<JP(n,k)<<endl;
    
    return 0;
}
