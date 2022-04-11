#include <iostream>
using namespace std;

int main()
{
	int age;
	char gender;
	cout<<"Enter age: ";
	cin>>age;
	cout<<"Enter gender: ";
	cin>>gender;

	if(gender=='M')
	{
		cout<<"Male ";
		if(age>=18)
			cout<<"Adult";
		else
			cout<<"Kid";
	}
	else
	{
		cout<<"Female ";
		if(age>=18)
			cout<<"Adult";
		else
			cout<<"Kid";
	}

	return 0;
}