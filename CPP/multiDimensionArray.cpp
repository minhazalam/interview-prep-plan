#include <iostream>
using namespace std;

int main()
{
	int arr[3][4] = {{10, 20, 30, 40},
		{32, 33, 43, 11},
		{55, 66, 33, 44}
	};

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}