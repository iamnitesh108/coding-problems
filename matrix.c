#include <stdio.h>


// int mat[1][9];
// int main() {
// 	for(int i = 0; i < 5; i++) {
// 		for(int j = 0; j < 9;j++) {
// 			cout<<mat[i][j]<<" ";
// 		}	
// 		cout<<endl;
// 	}
// }

int main() {
	int arr[5], i,  j;
	for( i =0; i < 9; i++) {
		arr[i] = 3;
	}
	for( j = 0; j < 9; j++) {
		printf("%d",arr[j]);
		printf(" ");
	}
	printf("\n");
}