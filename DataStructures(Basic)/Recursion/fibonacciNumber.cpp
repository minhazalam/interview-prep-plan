#include <iostream>
using namespace std;

int fibNumber(int n)
{
	if(n<=1)
		return n;
	return fibNumber(n-1)+fibNumber(n-2);
}

int main()
{
	int n;
	cin>>n;

	int res=fibNumber(n);
	cout<<res<<endl;

	return 0;
}