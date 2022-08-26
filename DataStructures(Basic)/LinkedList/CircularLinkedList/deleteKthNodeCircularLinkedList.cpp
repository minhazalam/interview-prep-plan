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

Node *deleteKthNodeCircularLinkedList(Node *head, int k){
    if(head==NULL){
        return NULL;
    }
    if(head->next==head){
        delete(head);
        return NULL;
    }
    if(k==1){
        return deleteHeadCircularLinkedListEfficient(head);
    }
    Node *curr=head;
    for(int i=0;i<k-2;i++){
        curr=curr->next;
    }
    Node *temp=curr->next;
    curr->next=curr->next->next;
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


    cout<<"***** Original Linked List ******"<<endl;
    printCircularLinkedList(head);

    cout<<endl;

    cout<<"***** Delete head node *****"<<endl;
    head=deleteKthNodeCircularLinkedList(head,1);
    printCircularLinkedList(head);

    cout<<endl;

    cout<<"***** Delete Kth node *****"<<endl;
    head=deleteKthNodeCircularLinkedList(head,3);
    printCircularLinkedList(head);

    cout<<endl;
    return 0;
}