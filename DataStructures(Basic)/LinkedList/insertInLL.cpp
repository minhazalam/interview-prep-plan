#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};


// Insert at the begining of the linked list
Node *insertBegin(Node *head,int x)
{
    Node *temp=new Node(x);
    temp->next=head;
    return temp;
}

// Insert at the end of the linked list
Node *insertEnd(Node *head,int x)
{
    Node *temp=new Node(x);
    if(head==NULL)
    {
        return temp;
    }
    Node *curr=head;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}

// Delete at the begining of the linked list
Node *deleteBegin(Node *head)
{
    if(head==NULL)
    {
        return NULL;
    }
    else
    {
        Node *temp=head->next;
        delete head;
        return temp;
    }
}

// Delete a node at the end of linked list
Node *deleteEnd(Node *head){
    if(head==NULL)
    {
        return NULL;
    }
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    Node *curr=head;
    while(curr->next->next!=NULL)
    {
        curr=curr->next;
    }
    delete (curr->next);
    curr->next=NULL;
    return head;
}

void printList(Node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main()
{
    Node *head=NULL;
    head=insertBegin(head,10);
    head=insertBegin(head,20);
    head=insertBegin(head,30);
    head=insertBegin(head,40);

    head=insertEnd(head,12);
    head=insertEnd(head,14);
    head=insertEnd(head,16);
    printf("...Before deletion...\n");
    printList(head);

    head=deleteBegin(head);
    printf("\n...After deletion...\n");
    printList(head);

    return 0;
}