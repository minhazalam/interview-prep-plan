#include <iostream>

using namespace std;

void getAddMultiply(int a,int b, int *aptr,int *mptr)
{
	*aptr=a+b;
	*mptr=a*b;
}

int main()
{
	int x=10,y=20,a,m;
	getAddMultiply(x,y,&a,&m);

	cout<<"Addition: "<<a<<" "<<"Multiplication: "<<m<<endl;
}