/*
121. Best Time to Buy and Sell Stock
10/9/2023
Time: 18m 55s
Note: Spent too much time on a simple typo that changed logic [min(prices[0], ...) instead of actual]
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0, cheapest = INT_MAX;
        for (int i=0; i < prices.size(); i++) {
            if (prices[i] - cheapest > 0) {
                max_profit = max(max_profit, prices[i] - cheapest);
            }
            cheapest = min(cheapest, prices[i]);
        }
        return max_profit;
    }
};