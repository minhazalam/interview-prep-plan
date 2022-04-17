#include <iostream>
using namespace std;

void fun1()
{
	cout<<"GFG";
	fun1();
}

int main()
{
	fun1();

	return 0;
}