#include<bits/stdc++.h>

using namespace std;

class Hash
{
	int BUCKET;
	list<int> *table;

public:
	Hash(int size)
	{
		BUCKET = size;
		table = new list<int> [BUCKET];
	}
	void insertItem(int data);
	void deleteItem(int data);
	int hashFunction(int x)
	{
		return (x % BUCKET);
	}
	void displayHash();
};



void Hash:: insertItem(int data)
{
	int index = hashFunction(data);
	table[index].push_back(data);
}


void Hash:: deleteItem(int data)
{
	int index = hashFunction(data);

	list<int> :: iterator i;

	for(i = table[index].begin(); i != table[index].end(); i++)
	{
		if(*i == data)
			break;
	}

	if(i != table[index].end())
		table[index].erase(i);
}

void Hash:: displayHash()
{
	for(int i = 0; i < BUCKET; i++)
	{
		cout <<i;
		for(auto x : table[i])
			cout <<" --> "<<x;
		cout<<endl;
	}
}


int main()
{
	int a[] = {15, 11, 27, 8, 12};
	int n = sizeof(a)/sizeof(a[0]);

	Hash h(10);

	for(int i = 0; i< n; i++)
	{
		h.insertItem(a[i]);
	}

	h.deleteItem(12);
	h.displayHash();

	return 0;

}