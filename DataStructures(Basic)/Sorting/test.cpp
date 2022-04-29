#include <iostream>
using namespace std;
int main()
{
	int y=10;
	y=(y++)+(y++)+(--y)+(y--);
	cout<<"Value of y: "<<y<<endl;

	return 0;
}