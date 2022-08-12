
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};
int heightOfBT(Node *root){
    if (root==NULL)
    {
       return 0;
    }
    
    return max(heightOfBT(root->left),heightOfBT(root->right))+1;
}

// bool IsBalanced(Node *root)
// {
//     // time comp : O(n^2);
//     if (root == NULL)
//     {
//         return true;
//     }
    

//     int lh= heightOfBT(root->left);
//     int rh= heightOfBT(root->right);
//     return (abs(lh-rh)<=1 && IsBalanced(root->left)&& IsBalanced(root->right));
// }
int IsBalanced(Node *root)
{
    // time comp : O(n);
    if (root == NULL)
    {
        return 0;
    }
    

    int lh= IsBalanced(root->left);
    if (lh==-1)
    {
        return -1;
    }
    
    int rh= IsBalanced(root->right);
     if (rh==-1)
    {
        return -1;
    }
    if (abs(rh-lh)>1)
    {
        return -1;
    }
    
    return max(lh,rh)+1;
}

int main(int argc, char const *argv[])
{
    Node *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(12);
    root->left->left = new Node(5);
    root->left->right = new Node(3);
    // root->left->left->left = new Node(1);

    

 

 if (IsBalanced(root)==-1)
 {
    cout<<"not balanced"<<endl;
 }else{
    cout<<" balanced"<<endl;
 }
 
    return 0;
}
