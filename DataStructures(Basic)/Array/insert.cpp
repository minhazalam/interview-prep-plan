#include <iostream>
using namespace std;
int insert(int arr[],int cap,int n,int pos,int x)
{
	if(n==cap)
		return n;
	int idx=pos-1;
	for(int i=n-1;i>=idx;i--)
		arr[i+1]=arr[i];
	arr[idx]=x;
	return (n+1);
}
int main()
{
	int cap=8;
	int arr[cap]={5,7,10,2,20};
	int n=5;
	cout<<"\nBefore insertion:\n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	cout<<endl;
	int pos=2;
	int x=3;
	
	n=insert(arr,cap,n,pos,x);
	cout<<"After insertion:\n";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<endl;
	cout<<endl;
	return 0;
}