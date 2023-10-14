class Solution {
public:
    int solve(vector<int> &dp, vector<int> &cost, int i){
        if(i>=cost.size()) return 0;
        if(dp[i] != -1) return dp[i];
        
        int a = cost[i] + solve(dp, cost, i+1); //1 step
        int b = cost[i] + solve(dp, cost, i+2); //2 steps
        
        return dp[i] = min(a, b);
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        int i;
        vector<int> dp(cost.size(), -1);
        return min(solve(dp, cost, 0), solve(dp, cost, 1)); //When we start from 0, from 1
    }
};