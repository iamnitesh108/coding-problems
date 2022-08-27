#include <bits/stdc++.h>
using namespace std;

void flipAndInvertImage(vector<vector<int>>& image) {
    for(int i = 0; i < image.size(); i++) {
        int j = 0;
        int k = image[i].size() - 1;
        
        while(j < k) {
            swap(!image[i][j++], !image[i][k--]);
        }
        
    }
    for(int i = 0; i < image.size(); i++) {
    	for(int j = 0; j < image[i].size(); j++) {
    		cout<<image[i][j]<<"  ";
    	}
    	cout<<endl;
    }
   		cout<<endl;

}
int main() {
	vector<vector<int>> image{{1, 1, 0},
							  {0, 1, 0},
							  {1, 0, 1}};
	flipAndInvertImage(image);						  
}