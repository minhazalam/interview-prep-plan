#include <iostream>
using namespace std;

void printNumbers(int n)
{
	if(n==0)
		return;
	cout<<n<<endl;
	printNumbers(n-1);
}
int main()
{
	cout<<"Before call: "<<endl;
	printNumbers(5);

	return 0;
}