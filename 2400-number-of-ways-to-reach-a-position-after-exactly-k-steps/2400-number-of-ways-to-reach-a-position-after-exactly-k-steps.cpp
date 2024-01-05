class Solution {
public:
    int mod = (int) 1e9 + 7;
    int solve(vector<vector<int>> &dp, int startPos, int endPos, int k){
        //Base Condn
        if(k==0){
            if(startPos==endPos) return 1;
            else return 0;
        }
        
        if(dp[startPos+1000][k] != -1){
            return dp[startPos+1000][k];
        }
        
        int a = (solve(dp, startPos+1, endPos, k-1))%mod;
        int b = (solve(dp, startPos-1, endPos, k-1))%mod;
        
        return dp[startPos+1000][k]=(a+b)%mod;
    }

    int numberOfWays(int startPos, int endPos, int k) {
        vector<vector<int>> dp(3001, vector<int> (k+1, -1));
        return solve(dp, startPos, endPos, k);
    }
};