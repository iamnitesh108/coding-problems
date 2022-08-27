#include <iostream> 
#include <vector>

using namespace std;

int main() {
	vector<int> vec1;
	int element;

	for (int i = 0; i < 40; i++) {

		cout<<"Enter an element to add to this vector";
		cin>>element;
		vec1.push_back(element);
	}

}b