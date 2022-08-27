#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
using namespace std;

// void function(vector<int> &vec) {
// 	unordered_map<int, int> m;

	
// 	for(int i = 0; i < vec.size(); i++) {
// 		m[vec[i]] = i;
// 	}

// 	for(auto x : m) {
// 		cout<<x.first<<"    "<<x.second<<endl;
// 	}
// 	cout<<endl;
// }
// int main() {
// 	vector<int> vec{2,1,2,3,7,4,2,1,6,8,4,9,8,0,5,5,1,2,3,7,4,2,1,6};
// 	function(vec);
// }
int main() {
	unordered_map<char, int> m;
	// m[5] = 50;
	// ++m[5];
	// cout<<m[5]<<endl;
	m['N'] = 1;
	m['I'] = 2;
	m['T'] = 3;
	m['E'] = 4;
	m['S'] = 5;
	m['H'] = 6;

	for(auto x : m) {
		cout<< x.first;
	}
	cout<<endl;
}
