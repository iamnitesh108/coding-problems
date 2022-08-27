#include <iostream>
using namespace std;

/*bool isPalindrome(int arr[], int first, int last)
{
	if(first >= last)
		return true;
	if(arr[first] == arr[last])
		return isPalindrome(arr, first+1, last -1);
	else
		return false;
}*/


bool isPalindrome(string str, int first, int last)
{
	if(first >= last)
		return true;
	if(str[first] == str[last])
		return isPalindrome(str, first+1, last -1);
	else
		return false;
}

int main()
{
	string str = "poyop";
	

	cout << isPalindrome(str,0,4)<<endl;
}



