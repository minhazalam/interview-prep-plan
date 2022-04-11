#include <iostream>

using namespace std;

int main()
{
	int arr[5] = {2, 2, 3, 4, 2};
	cout << sizeof(arr)/sizeof(arr[0]) << endl;

	return 0;
}