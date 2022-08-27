#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

//Checking ODD and EVEN by bit manipulation
void isOdd(int n) {
	if((n & 1) == 1) 
		cout<<"ODD"<<endl;
	
	else
		cout<<"EVEN"<<endl;
}

//Which number in array appear only once if others are twice
int appearOnce(vector<int> arr) {
	int unique = 0;

	for(int i = 0; i < arr.size(); i++) {
		unique ^= arr[i];
	}
	return unique;
}

//find the nth bit of given number
void findBit(int num, int pos) {
	//cout<<(num & (1 << (pos - 1))) <<endl; //it gives place value of bit given position
	cout<<((num & (1 << (pos - 1))) >>(pos -1))<<endl;
} 
//Remaining questions to be solved SET and RESET bit for given number at given position



int main () {
	int n = 9;
	vector<int> arr{2,3,4,1,2,1,3,6,4};


	//isOdd(n);

	//cout<<appearOnce(arr)<<endl;

	findBit(n, 1);
	
}