#include <iostream>
using namespace std;

void skipChar(string str, string res)
{
	if(str.length() == 0)
	{
		cout<<res<<endl;
		return;
	}
	
	if(str.at(0)== 'a')
	{
		skipChar(str.substr(1), res);
	}
	else
	{
		res += str.at(0);
		skipChar(str.substr(1), res);
	}
}

int main()
{
	skipChar("abtydfdaaa","");
}