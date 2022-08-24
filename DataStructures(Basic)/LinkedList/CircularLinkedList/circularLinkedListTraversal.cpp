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


/* Traversal of circular linked list. */
// METHOD 1. (FOR LOOP)
void printCircularLinkedList(Node * head)
{
    if(head==NULL)
    {
        return;
    }
    cout<<head->data<<' ';
    for(Node *p=head->next;p!=head;p=p->next)
    {
        cout<<p->data<<" ";
    }
}

// METHOD 2. (DO-WHILE LOOP)
void printCircularLinkedListDoWhile(Node *head)
{
    if(head==NULL)
    {
        return;
    }
    Node *p=head;
    do
    {
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
}

int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    head->next->next->next->next->next=head;

    printCircularLinkedList(head);

    cout<<endl;
    cout<<endl;
    cout<<endl;
    printCircularLinkedListDoWhile(head);
    return 0;
}