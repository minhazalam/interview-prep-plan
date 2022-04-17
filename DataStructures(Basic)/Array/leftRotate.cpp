#include <iostream>
using namespace std;

/*Left rotate an array by one*/
/*Time complexity : O(n)*/
void leftRotate(int arr[],int n)
{
	int temp=arr[0];
	for(int i=1;i<n;i++)
	{
		arr[i-1]=arr[i];
	}
	arr[n-1]=temp;
}

int main()
{
	int arr[]={30,5,20}; //array
	int n=sizeof(arr)/sizeof(arr[0]); //size
	cout<<endl;

	cout<<"Before rotation:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}

	cout<<endl;

	cout<<"After rotation:\n";
	leftRotate(arr,n); //function call
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	cout<<endl;

	return 0;
}