#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

void printCircularLinkedList(Node *head){
    if(head==NULL){
        return;
    }
    Node *p=head;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
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

// Naive approach to delete the head of a circular linked list
// O(n) -> n: number of nodes in a linked list.
Node *deleteHeadCircularLinkedList(Node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==head){
        delete(head);
        return NULL;
    }
    Node *curr=head;
    while(curr->next!=head){
        curr=curr->next;
    }
    curr->next=head->next;
    delete(head);
    return (curr->next);
}

Node *deleteHeadCircularLinkedListEfficient(Node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==head){
        delete(head);
        return NULL;
    }
    head->data=head->next->data;
    Node *temp=head->next;
    head->next=head->next->next;
    delete(temp);
    return head;
}

int main(){
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(34);
    head->next->next->next->next->next=head;

    head=deleteHeadCircularLinkedListEfficient(head);
    printCircularLinkedListDoWhile(head);

    cout<<endl;
    return 0;
}