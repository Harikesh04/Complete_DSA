#include<bits/stdc++.h>
using namespace std;


//https://leetcode.com/problems/generate-parentheses/

// generate all the balanced paranthesis for n pairs of brackets

//observation

 // openining bkts = n, closing bkts =n;
  
//   we can always put op bkts in current string but we can put closing bckts only when its cnt> op  bkts cnt.

// no. of op bckts in cur string till index n-1 should always greater then closing bkts for balanced paranthesis condition

class Solution {
public:
   
    void func(int n,int op,int cl,string& s,vector<string>&v){
        
        //bc
        if(op==0&& cl==0){
            v.push_back(s);
            return;
        }
        
        if(op!=0){
            string op1 = s;
            op1.push_back('(');
            func(n,op-1,cl,op1,v);
        }
        if(cl>op){
            string op2=s;
            op2.push_back(')');
            func(n,op,cl-1,op2,v);
        }
        
    }
    
    
    
    vector<string> generateParenthesis(int n) {
        int op=n,cl=n;
        string s="";
         vector<string>v;
        func(n,op,cl,s,v);
        return v;
        
        
        
    }
};