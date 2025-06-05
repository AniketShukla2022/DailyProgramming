class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy = 0;
        int maxProfit = 0;
        for (int i=1; i<n; i++)
        {
            if(prices[i] > prices[buy])
            {
                int profit = prices[i] - prices[buy];
                maxProfit = max(maxProfit, profit);
            }
            else 
            {
                buy = i;
            }
        }
        return maxProfit;
    }
};
