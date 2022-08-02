#include <iostream>
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

// To traverse the single linked list
void iPrintList(Node *head)
{
	Node *curr=head;
	while(curr!=NULL)
	{
		cout<<curr->data<<" ";
		curr=curr->next;
	}
}

void rPrintList(Node *head)
{
	if(head==NULL)
	{
		return;
	}
	cout<<head->data<<" ";
	rPrintList(head->next);
}

// Serach in a linked list
int iSearch(Node *head, int key)
{
	int pos=1;
	Node *curr=head;
	while(curr!=NULL)
	{
		if(curr->data==key)
		{
			return pos;
		}
		else
		{
			pos++;
			curr=curr->next;
		}
	}
	return -1;
}
int main()
{
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
	printf("Iterative traversal....");
	iPrintList(head);

	printf("\n");

	printf("Recurssive traversal....");
	rPrintList(head);

	cout<<"\nElement present at "<<iSearch(head,11)<<endl;
	return 0;
}