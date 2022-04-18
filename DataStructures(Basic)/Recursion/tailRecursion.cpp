/*Tail Recursion*/

#include <iostream>
using namespace std;

void fun(int n)
{
	// base case
	if(n==0)
		return;
	fun(n-1);
	cout<<n<<endl;
}

int main()
{
	int n;
	cout<<"enter n : ";
	cin>>n;

	fun(n);

	return 0;
}