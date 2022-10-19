#include <bits/stdc++.h>
using namespace std;

//tc: O(h) , space: theta(n);

struct Node
{ // creating a structure Node
    int key;
    Node *left;
    Node *right;
    Node(int k)
    { // constructor function
        key = k;
        left = right = NULL;
    }
};

Node* insert(Node *root, int val)
{
    if(root==NULL){
        return new Node(val);
    }
    else if(root->key>val){
        root->left=insert(root->left,val);
    }else if(root->key<val){
         root->right=insert(root->right,val);
    }

    return root;
    
   
}

int main(int argc, char const *argv[])
{
    Node *root = new Node(15);
    root->left = new Node(5);
    root->right = new Node(20);
    root->left->left = new Node(3);
    root->right->left = new Node(18);
    root->right->right = new Node(80);
    root->right->left->left = new Node(16);

    insert(root,30);

    return 0;
}