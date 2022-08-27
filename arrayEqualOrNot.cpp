#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

bool check(vector<int> A, vector<int> B, int N) {
    //code here
    unordered_map<int, int> m;
    for(auto x : A) {
        m[x]++;
    }

    for(auto x : B) {
        if(m.find(x) == m.end()) {
            return false;
        }
        m[x]--;
        if(m[x] == 0) {
        	m.erase(x);
        }
    }
    cout<<m.size()<<endl;
    return m.size() == 0;
}

int main() {
	vector<int> A{1,2,3,4,5,9};
	vector<int> B{5,4,3,2,1,9};

	cout<<check(A, B, 5)<<endl;
}