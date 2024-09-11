class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int iMin = 0;
        int iMax = 0;
        int profit = 0;
        for (int i = 0; i<prices.size(); i++)
        {
            if (prices[iMin] > prices[i] )
                iMin = i;
            if (prices[iMax] < prices[i])
                iMax = i;
            if (iMax > iMin)
            {
                profit = max(profit, prices[iMax]-prices[iMin]);
            }
            if (iMin > iMax)
                iMax = iMin;
        }
        return profit;
    }
};