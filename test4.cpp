#include <iostream>
using namespace std;

int main()
{
	int i = 1;
	

	//int p = x%2 == 0;

	/*if(p)   
		cout<<x<<" is even"<<endl; // p --> q
	else if(!p)
		cout<<x<<" is odd"<<endl;  // !p --> !q


	!(p) || cout<<x<<" is even"<<endl;
	   p || cout<<x<<" is odd"<<endl;

	!(p && !(cout<<x<<" is even"<<endl));
	   p || cout<<x<<" is odd"<<endl;*/


	// !(p) || cout<<x<<" is even"<<endl;

	//    !(p || cout<<x<<" is odd"<<endl);

	// !(x == 1) || cout<<"This is statement 1"<<endl;		
	// !(!(x == 2) || cout<<"This is statement 2"<<endl);
	// !(!(x == 3) || cout<<"This is statement 3"<<endl);
	// !(!(x == 4) || cout<<"This is statement 4"<<endl);


	// while(i < 50)
	// {
	// 	!(i % 2 == 0) || cout<<"Even"<<endl;	

	// 	!(!(!(i % 2 == 0)) || cout <<"Odd"<<endl);

		

	// 	i++;
	// }
	while(i < 50)
	{
		!(i % 2 == 0) || cout<<"Even"<<endl

		!((i % 2 == 0) || cout <<"Odd"<<endl);

		

		i++;
	}




}