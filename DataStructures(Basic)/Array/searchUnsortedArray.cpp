#include <iostream>
using namespace std;

int searchUnsortedArray(int arr[],int n,int x)
{
	for(int i=0;i<n;i++)
		if(arr[i]==x)
			return i;
	return -1;
}

int main()
{
	int arr[]={20,5,7,25};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x=23;
	cout<<"Element present at index: "<<searchUnsortedArray(arr,n,x)<<endl;

	return 0;
}