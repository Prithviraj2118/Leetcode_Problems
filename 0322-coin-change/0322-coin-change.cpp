class Solution {
public:
    int mn = INT_MAX;
    int solve(vector<vector<int>> &dp, vector<int>& coins, int amount, int i){
        if(amount < 0) return 1e8;
        if(amount == 0) return 0;
        
        if(dp[i][amount]!=-1) return dp[i][amount];
        int a, b=INT_MAX;
        for(int k=i; k<coins.size(); k++){
            a = 1 + solve(dp, coins, amount-coins[k], k);
            b=min(a, b);
        }
        return dp[i][amount]=b;
    }
    
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>> dp(coins.size(), vector<int> (10001,-1));
        int ans = solve(dp, coins, amount, 0);
        if(ans>10000) return -1;
        return ans;
    }
};