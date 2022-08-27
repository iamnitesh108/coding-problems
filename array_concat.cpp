#include <iostream>
#include <utility>
#include <vector>
using namespace std;

// Input: nums = [1,2,1]
// Output: [1,2,1,1,2,1]

// Explanation: The array ans is formed as follows:
// - ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]
// - ans = [1,2,1,1,2,1]
// vector<int> getConcatenation(vector<int>& nums) {
//     vector<int> ans;
//     int n = nums.size();
//     for(int i = 0; i < n; i++) {
//         ans.push_back(nums[i]);
//     }
//     for(int i = 0; i < n; i++) {
//         ans.push_back(nums[i]);
//     }

//     return ans;
// }

vector<int> getConcatenation1(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans;       // why I have to declare vector size
    for(int i = 0; i < n; i++) {
          ans[i] = nums[i];
    }

    return ans;
}
int main() {
	vector<int> v{2, 4, 9};
	vector<int> ans;

	ans = getConcatenation1(v);

	for(int i : ans) {

		cout<<i<<"\t";
	}
	cout<<endl;
}