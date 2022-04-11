#include <iostream>

using namespace std;

void fun(int x)
{
	if(x==0)
		return;
	else
	{
		cout<<"geeks"<<" ";
		fun(x-1);
		cout<<"for geeks"<<" ";
	}
}

int main()
{
	fun(3);
	return 0;
}