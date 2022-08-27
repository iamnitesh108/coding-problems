#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> vec{2, 4, 6, 8, 10, 12, 14};

	auto it = find(vec.begin(), vec.end(), 4);

	cout << it - vec.begin() <<endl;
}