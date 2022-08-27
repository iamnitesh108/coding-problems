#include <iostream>
using namespace std;

int main() {
	char c = 'a'- 32;// small to capital
	char d = 'A'+ 32;// capital to small
	//char diff = 'A' - 'a';
	// char e = 'B' + ('a' - 'A');// capital to small
	char e = 'b' - ('a' - 'A');// small to capital
	cout<<e<<endl;
	

	string s = "abcdefghijklmnopqrstuvwxyz";
	for(int i = 0; i < s.size(); i++) {
		cout<<s[i] - 'a'<<" ";
	}
	cout<<endl;

	//int to char
	int i = 65;
    char ch = i;
    std::cout << ch << std::endl;  

    // ASCII value of char
    int xx = 'B';
    cout<<xx<<endl;

    // ASCII to num

    char yy = 65;
    cout << yy <<endl;
///////////////////////////////////////
    char x = '4';
    cout << x <<endl;

    // Index to char
    for(int i = 0; i < 26; i++) {
	    char lett = 'a' + i; 
	    cout<<lett<<" ";
    }cout<<endl;

	
}