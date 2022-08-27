#include <iostream>
using namespace std;

string moveX(string str, string res, int idx, int count)
{
	if(str.length() == idx)
	{
		for(int i = 0; i < count; i++)
		res.push_back('x');
		cout<<res<<endl;
		return "";
	}
	if(str[idx] == 'x')
	{
		count++;
		moveX(str, res, idx+1, count);

	}
	
	else
	{
		res.push_back(str[idx]);
		moveX(str, res, idx+1, count);
	}
	

	return "";

} 
int main()
{
	string str = "Nxxitxesxxh";
	string res;
	int idx = 0;
	int count = 0;

	res = moveX(str, res, idx, count);

	for(auto x: res)
		cout<<x;
	cout<<endl;
}


/*
#include <iostream>
using namespace std;

string res;

void moveX(string str, int idx, int count)
{
	if(str.length() == idx)
	{
		for(int i = 0; i < count; i++)
		res.push_back('x');
	
		return ;
	}
	if(str[idx] == 'x')
	{
		count++;
		moveX(str, idx+1, count);

	}
	
	else
	{
		res.push_back(str[idx]);
		moveX(str, idx+1, count);
	}
	

	return ;

} 
int main()
{
	string str = "Nxxitxesxxh";
	int idx = 0;
	int count = 0;

	moveX(str, idx, count);

	for(auto x: res)
		cout<<x;
	cout<<endl;
}
*/