#include <iostream>
using namespace std;

int main()
{
	int i = 0;

	while(i < 100)
	{
		if(i % 3 == 0 && i % 5 == 0)
			cout<<"fizzbuzz"<<endl;
		else if(i % 3 == 0)
			cout <<"fizz"<<endl;
		else if(i  % 5 == 0)
			cout<<"buzz"<<endl;
		else
			cout<<i<<endl;
		i++;
	}

}
	
