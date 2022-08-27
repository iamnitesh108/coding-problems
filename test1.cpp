#include <iostream>
using namespace std;

class Employee {
public:
	int a,b,c;
	int d,e;
	void setData(int a1, int b1, int c1);
	void getData() {

		cout << "Address of nitesh is "<< this <<endl;

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
   	Employee nitesh, *ptr;

   	ptr = &nitesh;

   	cout << "Address of nitesh is "<<ptr<<endl;

   	nitesh.d = 44;
   	nitesh.e = 55;

    nitesh.setData(1,2,3);
   	cout <<"The value of a is "<<nitesh.a<<endl;
   	nitesh.getData();


    return 0;
}