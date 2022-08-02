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
int rSearch(Node *head,int key)
{
	if(head==NULL)
	{
		return -1;
	}
	if(head->data==key)
	{
		return 1;
	}
	else
	{
		int res=rSearch(head->next,key);
		if(res==-1)
		{
			return res;
		}
		return res+1;
	}
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

	cout<<"\nElement present at "<<rSearch(head,30)<<endl;
	return 0;
}