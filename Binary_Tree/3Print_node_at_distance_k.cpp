# include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int k){
        key=k;
        left=right=NULL;
    }
};

void PrintNodeAtDisK(Node *root,int k){
    if (root == NULL)
    {
        return;
    }
    if (k==0)
    {
       cout<<root->key<<" ";
    }else{
        PrintNodeAtDisK(root->left,k-1);
        PrintNodeAtDisK(root->right,k-1);
    }
    
    
}

int main(int argc, char const *argv[])
{
 Node *root = new Node(10);
 root->left=new Node(2);
 root->right=new Node(3);
 root->left->left=new Node(5);
 root->left-> right=new Node(8);
 int k;cin>>k;

 PrintNodeAtDisK(root,k);
    
    return 0;
}
