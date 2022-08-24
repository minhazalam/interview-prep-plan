#include<iostream>
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


Node *revLinkedList(Node *head)
{
    Node *curr=head;
    Node *prev=NULL;
    while(curr!=NULL)
    {
        Node *next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

void printLinkedList(Node *head)
{
    Node *curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    printf("***** Linked List *****\n");
    printLinkedList(head);

    cout<<endl;
    // call reverse function
    head=revLinkedList(head);
    printf("***** Linked List After Reversal *****\n");
    printLinkedList(head);
    cout<<endl;
    return 0;
}