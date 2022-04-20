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
		return recursiveBinarySearch(arr,low,mid-1,x);
	else
		return recursiveBinarySearch(arr,mid+1,high,x);
}
int iterativeBinarySearch(int arr[],int low,int high,int x)
{
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid]==x)
			return mid;
		else if(arr[mid]>x)
			high=mid-1;
		else
			low=mid+1;
	}
	return -1;
}
int main()
{
	int arr[]={10,20,30,40,50,60};
	int x=50;
	int low=0;
	int high=(sizeof(arr)/sizeof(arr[0]))-1;
	int res=iterativeBinarySearch(arr,low,high,x);
	cout<<res<<endl;
	return 0;
}