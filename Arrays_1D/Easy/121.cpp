#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    int minPrice = prices[0]; // Store the minimum price encountered so far
    int maxProfit = 0; // Store the maximum profit

    for (int i = 1; i < prices.size(); i++) {

        minPrice = min(minPrice, prices[i]); // Update the minimum price
        cout<<"min-price "<<minPrice<<" ";
        maxProfit = max(maxProfit, prices[i] - minPrice); // Update max profit
        cout<<"max-profit "<<maxProfit<<" ";
        cout<<endl;
    }

    return maxProfit;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Max Profit: " << maxProfit(prices) << endl; // Output: 5
    return 0;
}
