#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;



int main() {
	vector< vector<int> > mat{ {1,2,3},
			{4,5,6},
			{7,8,9} };
	for(int i = 0; i+1 < 3; i++) {
		for(int j = i; j < 3; j++) {
			swap(mat[i][j], mat[j][i]);
		}
	}
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3;j++) {
			cout<<mat[i][j]<<" ";
		}	
		cout<<endl;
	}




}
