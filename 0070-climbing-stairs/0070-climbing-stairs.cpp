class Solution {
public:
    int solve(vector<int> &dp, int i, int n){
        if(i==n) return 1;  //We reach nth step
        else if(i>n) return 0;  //Out of bound
        
        if(dp[i] != -1) return dp[i];
        
        int a = solve(dp, i+1, n); //1 step
        int b = solve(dp, i+2, n);  //2 step
            
        return dp[i]=a+b; //Totsl ways
    }
    
    int climbStairs(int n) {
        vector<int> dp(n, -1);
        return solve(dp, 0, n);
    }
};