#include <iostream>
#include <cstring>
using namespace std;
int fact[10000];



int factorial(int n) {
	if(n == 0) {
		return 1;
	}

	return factorial(n - 1) * n;
}


int factorial_tab(int n) {
	fact[0] = 1;

	for(int i = 1; i <= n; i++) {
		fact[i] = i * fact[i - 1];
	}

	return fact[n];
}

int main() {
	memset(fact, -1, sizeof(fact));

	cout<<factorial(31)<<endl;
	cout<<factorial_tab(31)<<endl;
}
