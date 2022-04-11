#include <bits/stdc++.h>

using namespace std;

void printVector(vector<int> &v)
{
	for(int x:v)
		cout<<x<<" ";
}

int main()
{
	vector<int> v;
	for(int i=0;i<1000;i++)
		v.push_back(i);

	printVector(v);
	return 0;
}