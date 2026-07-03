class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int subprofit = 0;
        int min = prices[0];
        for (int i = 0; i < prices.size(); i++){
            if (min > prices[i]){
                min = prices[i];
            } else{
                subprofit = prices[i] - min;
                profit = max(profit, subprofit);
            }
        }
        return profit;
    }
};