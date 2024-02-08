class Solution {
public:
    int dp[10001];
    int solve(int i, int n){
        if(n==0) return 0;
        if(n<0) return 1e8;
        
        if(dp[n] != -1) return dp[n];
        int a=0, b=INT_MAX, c;
        for(int j=i; j*j<=n; j++){
            c=j*j;
            a = 1 + solve(j, n-c);
            b = min(b, a);
        }
        return dp[n]=b;
    }
    int numSquares(int n) {
        if(n==1 || n==2 || n==3) return n;
        memset(dp , -1 , sizeof(dp));

        int ans = solve(1, n);
        return ans;
    }
};