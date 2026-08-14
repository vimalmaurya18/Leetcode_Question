class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int k=INT_MAX,profit=0;
        for(int i=0;i<prices.size();i++)
        {
           k=min(k,prices[i]);
           profit=max(profit,prices[i]-k);
        }
        return profit;
    }
};