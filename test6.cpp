#include <iostream>
using namespace std;


int findOccurance(string str, int first, int last, char c)
{
    if(first > last) 
    {
    	cout<<"Not Found"<<endl;
        return 1;
    }
	if(str[first] == c)
    {
        cout<<"First index = "<<first<<endl;
         return 2;
    }
	   

	if(str[last] == c )
    {
	    cout<<"Last index = "<<last<<endl;
    	return 3;
    }
	
	return
		10*findOccurance(str, first+1, last-1, c);
		

}
int main()
{
	char c = 'f';
	string str = "gdfdgfgfjfu";
	
	cout<<findOccurance(str, 0 , str.length()-1, c)<<endl;
	}