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

void leftRotateByD(int arr[],int n,int d)
{
	reverseArray(arr,0,d-1);
	reverseArray(arr,d,n-1);
	reverseArray(arr,0,n-1);
}

int main()
{
	int arr[]={10,5,30,15,20,50};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Before rotation: "<<endl;
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	cout<<"After rotation: "<<endl;
	leftRotateByD(arr,n,3);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}