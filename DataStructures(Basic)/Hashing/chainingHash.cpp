/*CPP inomlementation of our own hash table for chaining detection*/
#include <bits/stdc++.h>
using namespace std;

struct MyHash
{
	int BUCKET;
	list<int> *table;
	MyHash(int b) //constructor
	{
		BUCKET=b;
		table=new list<int>[BUCKET];
	}
	void insert(int key)
	{
		int i=key%BUCKET;
		table[i].push_back(key);
	}
	void remove(int key)
	{
		int i=key%BUCKET;
		table[i].remove(key);
	}
	bool search(int key)
	{
		int i=key%BUCKET;
		for(auto x:table[i])
		{
			if(x==key)
				return true;
		}
		return false;
	}
};
int main()
{
	MyHash mh(4);
	mh.insert(12);
	mh.insert(23);
	cout<<mh.search(23)<<endl;
	mh.remove(23);
	cout<<endl;
	cout<<mh.search(23)<<endl;
	return 0;
}