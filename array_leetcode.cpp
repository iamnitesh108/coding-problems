#include<iostream>
#include<vector>
using namespace std;

/*2011. Final Value of Variable After Performing Operations

Input: operations = ["--X","X++","X++"]
Output: 1
*/
int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for(int i = 0; i < operations.size(); i++) {
            if(operations[i] == "++X" || operations[i] == "X++") {++x;}
            else if(operations[i] == "--X" || operations[i] == "X--") {--x;}
        }
     return x;
}
//OR
	int finalValueAfterOperations1(vector<string>& operations) {
		int res = 0;
		for(int i = 0; i < operations.size(); i++){
			(operations[i][1] == '+') ? res++ : res--;
		}
		return res;
	}