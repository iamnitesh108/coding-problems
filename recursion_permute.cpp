#include<iostream>
#include <vector>
using namespace std;

/*void permute(string str, string res)
{
	if(str.length() == 0)
	{
		cout << res << endl;
		return;
	}

	for(int i = 0; i < str.length(); i++)
	{
		char c = str[i];
		
		permute(str.substr(0,i) + str.substr(i+1), res + c);
	}
}*/


vector<string> permute2(string str, string res)
{
	if(str.length() == 0)
	{
		vector<string> vec;
		vec.push_back(res);
		return vec;
	}

	vector<string> vec2;
	for(int i = 0; i < str.length(); i++)
	{
		char c = str[i];
		
		vector<string> vec1 = permute2(str.substr(0,i) + str.substr(i+1), res + c);

		for(string x : vec1) {
			vec2.push_back(x);
		}
	}
		return vec2;
}

int main()
{
	string str = "AAB";
	//permute(str, "");
	vector<string> ans = permute2(str, "");

	for(string x: ans)
		cout<<x<<endl;
	cout<<endl;
}