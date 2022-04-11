// #include <iostream>
// #include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int arr[]={10,20,100,40,50,500,8};
	int n=sizeof(arr)/sizeof(arr[0]); //number of elements

	// int res=arr[0];
	/*for(int i=1;i<n;i++)
		res=max(res,arr[i]);*/

	int res=*max_element(arr,arr+n);
	cout<<res<<endl;

	return 0;
}