#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<pair<int, int>> v = {{4,5}, {2,7}, {9, 8}, {5, 0}};
		//sort(v.begin(), v.end());

	for(auto x : v) {
		cout<<x.first<<" "<<x.second<<endl;
	}
}