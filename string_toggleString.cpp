#include <iostream>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
	string s, ans="";
	cin>>s;
 
	char ch;
	for(int i=0; i<s.size(); i++)
	{
		if(s[i]>='a' && s[i]<='z')
		{
			ch = s[i]-32;
			ans.pb(ch);
		}
		else
		{
			ch = s[i]+32;
			ans.pb(ch);
		}
	}
	cout<<ans<<endl;
 
	return 0;
}