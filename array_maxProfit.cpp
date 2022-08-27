#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProfit(vector<int>& prices) {
    int profit = 0;
    int maxm = 0;
    
    for(int i =0; i < prices.size(); i++) {
        for(int j = i + 1; j < prices.size(); j++) {
            if(prices[i] < prices[j]) {
                profit = prices[j] - prices[i];
                maxm = max(profit, maxm);
            }
        }
    }
	return maxm;
}
int main() {
	vector<int> prices{7,1,5,3,6,4};
	cout << maxProfit(prices)<<endl;
}