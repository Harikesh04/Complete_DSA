# include<bits/stdc++.h>
using namespace std;

struct Node{// creating a structure Node
    int key;
    Node *left;
    Node *right;
    Node(int k){//constructor function
        key=k;
        left=right=NULL;
    }
};

int main(int argc, char const *argv[])
{
 Node *root = new Node(10);
 root->left=new Node(2);
 root->right=new Node(3);
 root->left->left=new Node(5);
    
    return 0;
}
