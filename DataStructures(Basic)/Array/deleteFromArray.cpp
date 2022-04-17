#include <iostream>
using namespace std;

int deleteFromArray(int arr[],int n,int x)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==x)
			break;
	}

	if(i==n)
		return n;
	
	for(int j=i;j<n-1;j++)
	{
		arr[i]=arr[i+1];
	}
	return (n-1);
}

int main()
{
	int arr[]={3,8,12,5,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"\nBefore Deletion: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	cout<<endl;
	// delete operation
	int x;
	cout<<"Enter element to be deleted: "<<endl;
	cin>>x;
	cout<<endl;
	n=deleteFromArray(arr,n,x);
	cout<<"After Deletion: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	cout<<endl;

	return 0;
}