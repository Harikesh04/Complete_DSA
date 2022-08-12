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
void Inorder(Node *root)
{
    //prints => leftsubtree , root, rightsubtree

    if (root != NULL)
    {
        Inorder(root->left);
        cout << root->key << " ";
        Inorder(root->right);
    }
}

int main(int argc, char const *argv[])
{
    Node *root = new Node(10);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(5);
    root->left->right = new Node(8);

    Inorder(root);
    return 0;
}
