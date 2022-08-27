#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> a[3];

	a[0].push_back(99);
	a[0].push_back(100);
    a[0].push_back(101);
	a[0].push_back(102);
	
	a
	a[1].push_back(88);
	a[1].push_back(87);

	a[2].push_back(66);
	a[2].push_back(63);
	a[2].push_back(60);


	for(int i = 0; i < a[0].size(); i++)
		cout<<a[0][i]<<" ";
	cout<<endl;

	for(int i = 0; i < a[1].size(); i++)
		cout<<a[1][i]<<" ";
	cout<<endl;

	for(int i = 0; i < a[0].size(); i++)
		cout<<a[2][i]<<" ";
	cout<<endl;



}

