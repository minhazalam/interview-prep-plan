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


int getMax(Node *root)
{
    if (root==NULL)
    {
        return -1;
    }
    return max(root->key, max(getMax(root->left),getMax(root->right)));
}

int main()
{
    Node *root=new Node(20);
    root->left=new Node(70);
    root->right=new Node(30);
    root->right->left=new Node(240);
    root->right->right=new Node(10);
    root->right->right->right=new Node(100);
    root->right->right->left=new Node(90);

    cout<<"Max in BT: "<<getMax(root);


    cout<<endl;
    return 0;
}