#include<bits/stdc++.h>
using namespace std;

//one approach we have studied is by bit manipution  
void PowerSet(string s,string curr="",int i=0){
    if (i==s.size())
    {
      cout<<curr<<endl;
      return;
    }

    PowerSet(s,curr,i+1);//this is recursive call when you don't include element in curr
    PowerSet(s,curr+s[i],i+1);//case when we include the element in our curr string.
    
}


int main()
{
    string s;cin>>s;
    PowerSet(s);
    
    return 0;
}
