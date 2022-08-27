#include <iostream>
#include <vector>
using namespace std;

/*void subsets(string s, string curr, int i)
{
	if(i == s.length())
	{
		cout <<curr<<endl;
		return;
	}

	subsets(s, curr, i+1);
	subsets(s, curr+s[i],i+1);
}

int main()
{
	string s = "abc";
	string curr = "";
	int i = 0;

	subsets(s,curr,i);

}*/

vector<string> subsets(string org, string result, int i)
{
	if(i == org.length())
	{
		vector<string> str;
		str.push_back(result);
		return str;
	}

	vector<string> ans2 = subsets(org, result+org[i],i+1);
	vector<string> ans1 = subsets(org, result, i+1);

	vector<string> ans;

	for(string y: ans2){
		ans.push_back(y);
	}
	for(string x: ans1){
		ans.push_back(x);
	}


	return ans;
	/*for(string x: ans2){
		ans1.push_back(x);
	}
	return ans1;*/
}

int main()
{
	string org = "AB";
	string result = "";
	int i = 0;

	vector<string> strr = subsets(org, result, i);

	for(string x: strr)
		cout<<x<<endl;
}