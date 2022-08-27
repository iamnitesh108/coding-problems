#include <iostream>
#include <vector>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) { // not correct
    vector<int> vec;
    for(int i = 0; i < matrix.size(); i++) {
        for(int j = 0; j < matrix[i].size(); j++) {
            if(matrix[i][j] == 0) {
                vec.push_back(i);
                vec.push_back(j);
            }
        }
    }
    
    for(int i = 0; i < matrix.size(); i++) {
        for(int j = 0; j < matrix[i].size(); j++) {
            if(i == vec[i] || j == vec[j]) {
                matrix[i][j] = 0;
            }
        }
    }
}

int main() {
    vector<vector<int>> mat{{1, 1, 0}, {1, 0, 1}, {1, 1, 1}};
    setZeroes(mat);
    for(int i = 0; i < mat.size(); i++) {
        for(int j = 0; j < mat[i].size(); j++) {
            cout<<mat[i][j]<<"  ";
        }
        cout<<endl;
    }
}