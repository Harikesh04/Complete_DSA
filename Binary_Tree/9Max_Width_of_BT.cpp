
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


int MaxWidthOfBT(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    queue<Node *> q;
    q.push(root);
    int res = 0;
    while (q.empty() == false)
    {
        int count = q.size();
        res = max(res, count);

        for (int i = 0; i < count; i++)
        {
            Node *curr = q.front();
            q.pop();

            if (curr->left != NULL)
            {
                q.push(curr->left);
            }
            if (curr->right != NULL)
            {
                q.push(curr->right);
            }
        }
       
    }
    return res;
}

int main(int argc, char const *argv[])
{
    Node *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(12);
    root->left->left = new Node(5);
    root->left->right = new Node(3);
    // root->left->left->left = new Node(1);

    cout << MaxWidthOfBT(root) << endl;

    return 0;
}
