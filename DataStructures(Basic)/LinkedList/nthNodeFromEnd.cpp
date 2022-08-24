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

/* Find Nth node from the end of the linked list. */
void printNthFromEndWithLength(Node *head,int pos)
{
    int len=0;
    for(Node *curr=head; curr!=NULL; curr=curr->next)
    {
        len++;
    }
    if(pos>len)
    {
        return;
    }
    // move to len-n+1 position from head
    Node *curr=head;
    for(int i=1; i<len-pos+1; i++)
    {
        curr=curr->next;
    }
    cout<<curr->data<<endl;
}

/* Find Nth position node from the end of linked list using two pointers method*/
void printNthFromEndTwoPointers(Node *head,int pos)
{
    if(head==NULL)
    {
        return;
    }
    Node *first=head;
    for(int i=0; i<pos; i++)
    {
        if(first==NULL)
        {
            return;
        }
        first=first->next;
    }
    Node *second=head;

    while(first!=NULL)
    {
        second=second->next;
        first=first->next;
    }
    cout<<second->data<<endl;
} 

int main()
{
    Node *head=new Node(10);
	head->next=new Node(20);

	head->next->next=new Node(24);
	head->next->next->next=new Node(40);
	head->next->next->next->next=new Node(50);

    // printNthFromEndWithLength(head,4);
    printNthFromEndTwoPointers(head,2);
    return 0;
}