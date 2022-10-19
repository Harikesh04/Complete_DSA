#include <bits/stdc++.h>
using namespace std;

// tc: O(h) , space: theta(n);

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

// iterative approach
//  t:O(h)
//  s:theta(1)

// if we write recursive
//  t:O(h)
//  s:theta(n)
int ciel(Node *root, int val)
{
    int res;
    while (root != NULL)
    {
        if (root->key == val)
        {
            return val;
        }
        else if (root->key < val)
        {

            root = root->right;
        }
        else if (root->key > val)
        {
            res = root->key;

            root = root->left;
        }
    }

    return res;
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

    cout << ciel(root, 16);

    return 0;
}