/*Tail Recursion*/

#include <iostream>
using namespace std;

void fun(int n,int k=1)
{
	// base case
	if(n==0)
		return;
	cout<<k<<endl;
	fun(n-1,k+1);
	// cout<<n<<endl;
}

int main()
{
	int n;
	cout<<"enter n : ";
	cin>>n;

	fun(n);

	return 0;
}