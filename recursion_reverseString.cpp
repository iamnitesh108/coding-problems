#include <iostream>
using namespace std;

void reverseString(string s)
{

	if(s.empty())
		return ;
	
	reverseString(s.substr(1));
	cout <<s[0];
	
}



int main()
{
	string s = "Nitesh Kumar Yadav";
	

	reverseString(s);
	cout<<endl;
	

}