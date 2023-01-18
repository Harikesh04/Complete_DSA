#include <bits/stdc++.h>

using namespace std;


bool isBalanced(string s){
stack<char> st;
    bool pass = true;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            s[i] = -1;
        }
        if (s[i] == ')')
        {
            s[i] = 1;
        }
        if (s[i] == '{')
        {
            s[i] = -2;
        }
        if (s[i] == '}')
        {
            s[i] = 2;
        }
        if (s[i] == '[')
        {
            s[i] = -3;
        }
        if (s[i] == ']')
        {
            s[i] = 3;
        }
    }
    if (s[0]>0)
    {
      return false;
        
    }
    
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] < 0)
        {
            st.push(s[i]);
        }
        if (s[i] > 0)
        {
            if ((st.top() + s[i]) == 0)
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }
    if (st.empty() == false)
    {
        return false;
    }

    else if (pass)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    if (isBalanced(s))
    {
        cout<<"is Balanced"<<endl;
    }else{
        cout<<"not balanced"<<endl;
    }
    
    
    

    return 0;
}
