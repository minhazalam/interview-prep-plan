#include <iostream>

using namespace std;

int main()
{
	int x=10;
	int *ptr=&x;

	cout<<*ptr<<endl;//value -> derefrenced
	cout<<ptr<<endl;//address

	x+=30;
	cout<<*ptr<<endl;

	*ptr+=40;
	cout<<x<<endl;

	int *pointer;
	cout<<pointer<<endl;
	cout<<*pointer<<endl;

	return 0;
}