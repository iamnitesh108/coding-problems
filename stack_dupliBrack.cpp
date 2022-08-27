#include <iostream>
#include <stack>
using namespace std;

void duplicateBrackets()
{
	string str = "(a+b)+(c+d)";
	stack <char> st;

	for(int i = 0; i < str.length(); i++)
	{
		char ch = str.at(i);

		if(ch == ')')
		{
			if(st.top() == '(')
			{
				cout <<"True "<<endl;
				return;
			}
			else
			{
				while(st.top() != '(')
				{
					st.pop();
				}
				st.pop();
			}
		}
		else
		{
			st.push(ch);
		}
	}
	cout<<"False"<<endl;
	return;
}
int main()
{
	duplicateBrackets();                                                          
}