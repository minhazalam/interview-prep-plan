#include <iostream>
using namespace std;

/*class Test
{
public:
	Test()
	{
		cout<<"Default.."<<endl;
	}
	Test(int x)
	{
		cout<<"Parameterized.."<<endl;
	}
};*/

/*class Main
{
	Test t;
public:
	Main(int x):t(x)
	{
		
	}
};*/

class Test
{
	int x;
public:
	Test(int x1):x(x1)
	{
		cout<<"Construct: "<<x<<endl;
	}
	~Test()
	{
		cout<<"Destruct: "<<x<<endl;
	}
};

int main()
{
	Test t1(10);
	Test t2(20);

	return 0;
}