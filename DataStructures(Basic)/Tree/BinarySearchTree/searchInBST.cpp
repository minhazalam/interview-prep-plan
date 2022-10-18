#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left,*right;

    Node(int k)
    {
        key=k;
        left=right=NULL;
    }
};

bool searchRecurssive(Node *root, int x)
{
    if(root==NULL)
    {
        return false;
    }
    else if(root->key==x)
    {
        return true;
    }
    else if(root->key<x)
    {
        return searchRecurssive(root->right,x);
    }
    else
    {
        return searchRecurssive(root->left,x);
    }
}

int main()
{
    Node *root=new Node(15);
    root->left=new Node(5);
    root->left->left=new Node(5);

    root->right=new Node(20);
    root->right->right=new Node(80);
    root->right->left=new Node(18);
    root->right->left->left=new Node(16);


    cout<<searchRecurssive(root,19);

    cout<<endl;
    return 0;
}