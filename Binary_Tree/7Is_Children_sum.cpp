
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

bool IsChildrenSUm(Node *root)
{
    int sum = 0;
    if (root == NULL)
    {
        return true;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return true;
    }
    if (root->left!=NULL)
    {
       sum+=root->left->key;
    }
    if (root->right!=NULL)
    {
       sum+=root->right->key;
    }
    

    return (root->key == sum && IsChildrenSUm(root->left) && IsChildrenSUm(root->right));
}

int main(int argc, char const *argv[])
{
    Node *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(12);
    root->left->left = new Node(5);
    root->left->right = new Node(3);

    

    if (IsChildrenSUm(root))
    {
       cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
    

    return 0;
}
