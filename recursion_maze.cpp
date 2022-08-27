#include <iostream>
#include <string>
using namespace std;

int countPath(int row, int col)
{
	if(row == 1 || col == 1)
		return 1;

	int diagonal = countPath(row-1, col-1);
	int right = countPath(row, col-1);
	int down = countPath(row-1, col);

	return right + down + diagonal;
}


void mazePath(string path, int row, int col)
{
	if(row == 1 && col == 1){
		cout<<path<<endl;
		return;
	}

	if(row > 1 && col > 1)
		mazePath(path + 'D', row - 1, col - 1);


	if(row > 1)
		mazePath(path + 'V',row - 1, col);


	if(col > 1)
		mazePath(path + 'H',row, col - 1);

	
}
// (2,2) is obstacle
void mazeWithObstacle(string path, int row, int col){
	if(row == 1 && col == 1){
		cout<<path<<endl;
	}

	if(row > 1 && col > 1){
		if(row == 2 && col == 2)
			return;
		mazeWithObstacle(path + 'D', row-1, col-1);
		
	}

	if(row > 1){
		if(row == 2 && col == 2)
			return;
		mazeWithObstacle(path + 'V', row-1, col);
		
	}
	if(col > 1){
		if(row == 2 && col == 2)
			return;
		mazeWithObstacle(path + 'H', row, col-1);
		
	}
}


void mazeWithObstacle1(string path, int row, int col){
	if(row == 1 && col == 1){
		cout<<path<<endl;
	}

	if(row > 1 && col > 1){
		if(row != 2 && col != 2){
			mazeWithObstacle(path + 'D', row-1, col-1);
		}
	}

	if(row > 1){
		if(row != 2 && col != 2){
			mazeWithObstacle(path + 'V', row-1, col);
		}
	}
	if(col > 1){
		if(row != 2 && col != 2){
			mazeWithObstacle(path + 'H', row, col-1);
		}
	}
}


int main()
{
	//mazePath("", 3, 3);
	//mazeWithObstacle("", 3, 3);cout<<endl;
	mazeWithObstacle1("", 3, 3);cout<<endl;
	cout<<"The possible paths are " << countPath(3, 3)<<endl;
}