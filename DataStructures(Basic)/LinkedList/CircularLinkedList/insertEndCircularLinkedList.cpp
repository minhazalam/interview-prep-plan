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

// Approach - O(n); n=number of nodes in a given linked list.
/*Node *insertBeginCircularLinkedList(Node *head,int x)
{
    Node *temp=new Node(x);

    if(head==NULL)
    {
        temp->next=temp;
    }
    else
    {
        Node *curr=head;
        while(curr->next != head)
        {
            curr=curr->next;
        }
        curr->next=temp;
        temp->next=head;
    }
    return temp;
}*/

// Approach - O(1);
Node *insertEndCircularLinkedListEfficient(Node *head,int x)
{
    Node *temp=new Node(x);
    
    // NULL LinkedList Check
    if(head==NULL)
    {
        temp->next=temp;
        return temp;
    }
    else
    {
        temp->next=head->next;
        head->next=temp;

        int t=head->data;
        head->data=temp->data;
        temp->data=t;

        return temp;
    }
}

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

    // head=insertBeginCircularLinkedList(head,15);
    head=insertEndCircularLinkedListEfficient(head,23);
    printCircularLinkedListDoWhile(head);

    cout<<endl;
    return 0;
}