class Solution {
public:
  vector<int>dp;
    int solve(vector<int>& coins,int amount){
        if(amount == 0)
            return 0;
        if(amount < 0)
            return INT_MAX-10;
        if(dp[amount] != -1)
            return dp[amount];
        int ans = INT_MAX-10;
        for(int i = 0;i<coins.size();i++)
            ans = min(ans,1+solve(coins,amount-coins[i]));
        return dp[amount] = ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        dp = vector<int>(amount+1,-1);
        int d = solve(coins,amount);
        if(d == INT_MAX-10)
            return -1;
        return d;
    }
};