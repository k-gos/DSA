class Solution {
public:
    void solve(vector<int>& prices, int &min_price,int &max_profit, int i)
    {
        if(i>=prices.size())
            return;
        if(prices[i]<min_price)
            min_price=prices[i];
        if((prices[i]-min_price)>max_profit)
            max_profit=prices[i]-min_price;
        solve(prices,min_price,max_profit,i+1);
    }
    int maxProfit(vector<int>& prices) {
        int min_price=INT_MAX;
        int max_profit=INT_MIN;
        solve(prices,min_price,max_profit,0);
        return max_profit;
    }
};