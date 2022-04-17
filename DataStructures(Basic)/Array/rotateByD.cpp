#include <iostream>
using namespace std;

void reverseArray(int arr[],int low,int high)
{
	while(low<high)
	{
		int temp=arr[low];
		arr[low]=arr[high];
		arr[high]=temp;
		low++;
		high--;
	}
}

/*Time complexity: 0(n)*/
void leftRotateByD(int arr[],int n,int d)
{
	reverseArray(arr,0,d-1);
	reverseArray(arr,d,n-1);
	reverseArray(arr,0,n-1);
}

void swap(int &x,int &y)
{
	int temp=x;
	x=y;
	y=temp;
}

void MoveZeros(int arr[],int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=0)
		{
			swap(arr[i],arr[count]);
			count++; //position of non-zero element
		}
	}
}

int main()
{
	/*int arr[]={10,5,30,15,20,50};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Before rotation: "<<endl;
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	cout<<"After rotation: "<<endl;
	cout<<"Enter d: ";
	int d;
	cin>>d;
	leftRotateByD(arr,n,d);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;*/

	/*MoveZeros*/
	int arr[]={10,20,0,0,30};
	int n=sizeof(arr)/sizeof(arr[0]);

	/*int x=90,y=9;
	swap(x,y);
	cout<<x<<" "<<y<<endl;*/
	cout<<"Before :";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";

	/*Function call*/
	cout<<endl;
	MoveZeros(arr,n);
	cout<<"After :";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}