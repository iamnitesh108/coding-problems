#include <iostream>
using namespace std;

const int row_size = 3;
const int col_size = 3;

/*	mazePath[][col_size] --> pass by pointer(array)

	(&mazePath)[][col_size] --> INVALID, row size should be mentioned
	(&mazePath)[row_size][col_size] --> VALID

*/
void pathRestrictions(string path, bool (&mazePath)[row_size][col_size], int row, int col) {
	if(row == row_size-1 && col == col_size-1){
		cout<<path<<endl;
		return;
	}

	if(!mazePath[row][col]) {
		return;
	}
	if(row < row_size - 1 && col < col_size - 1) {
		pathRestrictions(path + 'S', mazePath, row + 1, col + 1);
	}

	if(row < row_size - 1) {
		pathRestrictions(path + 'D', mazePath, row + 1, col);
	}

	if(col < col_size - 1) {
		pathRestrictions(path + 'R', mazePath, row, col + 1);
	}
}

void pathRestrictions1(string path, bool mazePath[][col_size], int row, int col) {
	if(row == row_size-1 && col == col_size-1){
		cout<<path<<endl;
		return;
	}

	if(!mazePath[row][col]) {
		return;
	}

	//mazePath[row][col] = 0;

	/*if(row < row_size - 1 && col < col_size - 1) {
		pathRestrictions1(path + 'S', mazePath, row + 1, col + 1);
	}*/

	if(row < row_size - 1) {
		mazePath[row][col] = 0;
		pathRestrictions1(path + 'D', mazePath, row + 1, col);
		mazePath[row][col] = 1;
	}

	if(col < col_size - 1) {
		mazePath[row][col] = 0;
		pathRestrictions1(path + 'R', mazePath, row, col + 1);
		mazePath[row][col] = 1;
	}

// including all the paths UP and LEFT

	if(row > 0) {
		mazePath[row][col] = 0;
		pathRestrictions1(path + 'U', mazePath, row - 1, col);
		mazePath[row][col] = 1;
	}

	if(col > 0) {
		mazePath[row][col] = 0;
		pathRestrictions1(path + 'L', mazePath, row, col - 1);
		mazePath[row][col] = 1;
	}

		//mazePath[row][col] = 1;
}

int main() {
	bool mazePath[][col_size] = {
		{1, 1, 1},
		{1, 1, 1},
		{1, 1, 1},		
	};

	

	//pathRestrictions("", mazePath, 0, 0);cout<<endl;
	pathRestrictions1("", mazePath, 0, 0);cout<<endl; 

}