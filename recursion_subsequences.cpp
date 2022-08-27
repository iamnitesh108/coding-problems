#include <iostream>
#include <vector>
using namespace std;

void subsequence(string str, int idx, string res)
{
	if(idx == str.length())
	{
		cout<<res<<endl;
		return;
	}
	subsequence(str, idx+1, res + str[idx]);
	subsequence(str, idx+1, res);
}

void subsequence11(vector<int> vec, int idx, vector<int> res) //wrong
{
		for(auto x : res){
			cout<<x;	
		}
	cout<<endl;
	for(int i = idx; i < vec.size(); i++) {
		res.push_back(vec[i]);
		subsequence11(vec, idx+1, res);
		res.pop_back();
	}
	
}

/*vector<string> subsequence(string str, int idx, string res)
{
	if(idx == str.length())
	{
		vector<string> sub;
		sub.push_back(res);
		//cout<<res<<endl;
		return sub;
	}
	vector<string> ans1 = subsequence(str, idx+1, res);
	vector<string> ans2 = subsequence(str, idx+1, res + str[idx]);

	vector<string> ans;

	for(string x: ans1){
		ans.push_back(x);
	}

	for(string y: ans2){
		ans.push_back(y);
	}

	return ans;
}*/

// string subsequence(string str, int idx, string res)
// {
// 	if(idx == str.length())
// 	{
// 		return res;
// 	}
// 	string ans2 = subsequence(str, idx+1, res + str[idx]);
// 	string ans1 = subsequence(str, idx+1, res);

// 	if(ans1.length() == 2)
// 		return ans1;
// 	else if(ans2.length() == 2)
// 		return ans2;
// 	else
// 		return "";
// }

int main()
{
	vector<int> vec{1, 2, 3};
	int idx = 0;
	/*vector<string> strr = subsequence(str, idx, "");
	for(string x: strr)
		cout<<x<<endl;*/
	// string strr = subsequence(str, idx, "");
	subsequence11(vec, idx, {});
	//cout<<strr<<endl;
}