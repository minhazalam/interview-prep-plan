#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int k)
    {
        key=k;
        left=right=NULL;
    }
};

void inorderTraversal(Node *root)
{
    if (root!=NULL)
    {
        inorderTraversal(root->left);
        cout<<root->key<<" ";
        inorderTraversal(root->right);
    }
}

void preorderTraversal(Node *root)
{
    if (root!=NULL)
    {
        cout<<root->key<<" ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

void postorderTraversal(Node *root)
{
    if(root!=NULL)
    {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout<<root->key<<" ";
    }
}

int main()
{
    Node *root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->right->left=new Node(40);
    root->right->right=new Node(50);

    cout<<"Inorder Traversal: ";inorderTraversal(root);
    cout<<"\n";

    cout<<"Preorder Traversal: ";preorderTraversal(root);

    cout<<"\n";
    cout<<"Postorder Traversal: ";postorderTraversal(root);

    cout<<endl;
    return 0;
}