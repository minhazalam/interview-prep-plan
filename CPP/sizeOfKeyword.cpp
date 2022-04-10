#include<iostream>
using namespace std;

int main()
{
	int x=10;
	cout<<sizeof(x++)<<"\n"; //sizeof is evaluated at compile time so ++ will never happen
	cout<<x;
}