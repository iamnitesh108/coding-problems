#include <iostream>
using namespace std;


void findOccurance(string str, int first, int last, char c)
{
	if(first > last) return;
	if(str[first] == c){
		cout<<"First index = "<<first<<endl;
		//return;
	}
	if(str[last] == c ){
		cout<<"Last index = "<<last<<endl;
		//return;
	}
	
	return	
		findOccurance(str, first+1, last-1, c);

}
int main()
{
	char c = 'd';
	string str = "gdfdgfgfjf";
	
	findOccurance(str, 0 , str.length()-1, c);
	}