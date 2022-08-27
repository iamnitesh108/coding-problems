#include <iostream>
#include <stack>
using namespace std;

int prec(char a)
{
    if(a == '^')
        return 3;
    else if(a == '*' || a == '/')
        return 2;
    else if(a == '+' || a == '-')
        return 1;
    else return -1;    
}

void inToPost(string s)
{
	string result;
	stack<char> st;

	for(int i = 0; i < s.length(); i++)
	{
		char c = s[i];

		if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			result += c;
		}
		else if(c == '(') {st.push(c);}
		else if(c == ')')
		{
			while(st.top() != '(')
			{
				result += st.top();
				st.pop();
			}
			st.pop();
		}
		else
		{
			while(!st.empty() && prec(s[i]) <= prec(st.top()))
			{
				result += st.top();
				st.pop();
			}
			st.push(c);  //not "st.push('c')" it will push character c not value of c
		}
	}
	while(!st.empty())
	{
		result += st.top();
		st.pop();
	}
	cout << result<<endl;
}

int main() {

	string s = "a+b*c^d*(a+b)";

	inToPost(s);
	return 0;
}