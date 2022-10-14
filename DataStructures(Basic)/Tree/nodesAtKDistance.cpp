#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node *left,*right;
    Node(int k){
        key=k;
        left=right=NULL;
    }
};

void preOrderTraversal(Node *root){
    if (root!=NULL){
        cout<<root->key<<" ";
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}

void printNodeAtKDistance(Node *root,int k){
    if(root==NULL){
        return;
    }
    if(k==0){
        cout<<root->key<<" ";
    }
    else{
        printNodeAtKDistance(root->left,k-1);
        printNodeAtKDistance(root->right,k-1);
    }
}

int main(){
    Node *root=new Node(10);
    root->left=new Node(20);
    root->left->left=new Node(40);
    root->left->right=new Node(50);
    root->right=new Node(30);
    root->right->right=new Node(70);
    root->right->right->right=new Node(80);

    preOrderTraversal(root);
    cout<<endl;
    printNodeAtKDistance(root,2);
    cout<<endl;
    return 0;
}