// #include <iostream>
// #include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> v{10,20,100,40,50,500,8};
	int res=*max_element(v.begin(),v.end());
	cout<<res<<endl;
	return 0;
}