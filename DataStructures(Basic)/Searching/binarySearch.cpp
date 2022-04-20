#include <iostream>
using namespace std;
int recursiveBinarySearch(int arr[],int low,int high,int x)
{
	if(low>high)
		return -1;
	int mid=(low+high)/2;
	if(arr[mid]==x)
		return mid;
	else if(arr[mid]>x)
		return binarySearch(arr,low,mid-1,x);
	else
		return binarySearch(arr,mid+1,high,x);
}

int main()
{
	int arr[]={10,20,30,40,50,60};
	int x=50;
	int low=0;
	int high=(sizeof(arr)/sizeof(arr[0]))-1;
	int res=recursiveBinarySearch(arr,low,high,x);
	cout<<res<<endl;
	return 0;
}