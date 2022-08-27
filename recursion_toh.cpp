
#include <iostream>
using namespace std;

void towerOfHanoi(int n, char A, char B, char C)
{
	if (n == 1)
	{
		cout<<"Move disk 1 from rod "<<A<<"to rod "<<B<<endl;
		return;
	}
	towerOfHanoi(n - 1, A, C, B);
	cout<<"Move disk "<<n<<" from rod "<<A<<" to rod "<<B<<endl;
	towerOfHanoi(n - 1, C, B, A);
}

int main()
{
	int n = 6; 
	towerOfHanoi(n, 'A', 'C', 'B'); 
	return 0;
}

