#include <iostream>

using namespace std;

int main(){
	int n;
	cout<<"Enter a natural number : ";
	cin>>n;

	if(n<0)
	{
		cout<<"Invalid\n";
	}
	else
	{
		cout << n*(n+1)/2;
	}
	return 0;
}