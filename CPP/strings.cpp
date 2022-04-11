#include <bits/stdc++.h>

using namespace std;

int main()
{
	string name;
	cout<<"Enter yout name: ";
	// cin>>name;
	getline(cin,name);
	// cout<<"\n Your name is "<<name<<endl;

	for(char x:name)
		cout<<x<<" ";



	return 0;
}