#include <bits/stdc++>
using namespace std;

struct Hash
{
	int BUCKET;
	list<int> *table;

	Hash(int size)
	{
		BUCKET = size;
		table = new list<int> [BUCKET];
	}
}
void insertItem(int data)
{
	int index = hashFunction(data);
	table[index].push_back(data);
}


int main()
{

}