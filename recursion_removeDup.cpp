#include <iostream>
using namespace std;

string removeDup(string s)
{
	if(s.length() == 0 )
		return "";
	if(s[0] == s[1])
	{
		string s = removeDup(s.substr(1));
		return s;
	}
	return s;
}

int main()
{
	string s = removeDup("aaabbbccc");

	cout<<s;
}