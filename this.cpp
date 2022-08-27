#include <iostream>
using namespace std;

class Employee {
public:
	int a,b,c;
	int d,e;
	void setData(int a1, int b1, int c1);
	void getData() {

		cout << "Address of nitesh is "<< this <<endl;//this pointer address same as ptr

		cout <<"The value of a is "<<a<<endl;
		cout <<"The value of b is "<<b<<endl;
		cout <<"The value of c is "<<c<<endl;
		cout <<"The value of d is "<<d<<endl;
		cout <<"The value of e is "<<e<<endl;

	}
};

void Employee :: setData(int a1, int b1, int c1) {
	a = a1;
	b = b1;
	c = c1;
	//d = d1;
	//e = e1;
}

int main() {
   	Employee nitesh, *ptr, *ptr1;

   	//ptr = &nitesh;
   	//ptr1 = &(nitesh.a);

   	//cout << "Address of nitesh is "<<ptr<<endl;


   	//cout << "Address of nitesh is "<<&nitesh<<endl;
   	//cout << "Address of nitesh.a is "<<ptr1<<endl;

   	//nitesh.d = 44;
   	//nitesh.e = 55;
   	nitesh = {111,2,3,4,555};
   // nitesh.setData(1,2,3);
   	nitesh.getData();


    return 0;
}