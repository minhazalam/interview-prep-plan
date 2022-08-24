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

void removeDuplicateNodes(Node *head)
{
    Node *curr=head;

    while(curr!=NULL && curr->next!=NULL)
    {
        if(curr->data==curr->next->data)
        {
            Node *temp=curr->next;
            curr->next=curr->next->next;
            delete(temp);
        }
        else
        {
            curr=curr->next;
        }
    }
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
    head->next->next=new Node(20);
    head->next->next->next=new Node(30);
    head->next->next->next->next=new Node(30);
    head->next->next->next->next->next=new Node(30);

    printf("***** Linked List with duplicates *****\n");
    printLinkedList(head);

    cout<<endl;
    printf("***** Linked List without duplicates *****\n");
    removeDuplicateNodes(head);
    printLinkedList(head);

    cout<<endl;

    return 0;
}