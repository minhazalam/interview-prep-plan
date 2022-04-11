// #include <iostream>
// #include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int arr[]={12,32,10,5};
	int n=sizeof(arr)/sizeof(arr[0]);

	int res=0;
	res=accumulate(arr,arr+n,res);

	
	cout<<res<<endl;
	return 0;
}