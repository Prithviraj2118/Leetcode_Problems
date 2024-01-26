class Solution {
public:
    int dp[51][51][52];
    long long v = 1e9 + 7;
    
    int solve(int m, int n, int maxi, int startRow, int startCol){
        if(maxi<0) return 0;
        if(startRow<0 || startCol<0 || startRow==m || startCol==n) return 1;
        
        if(dp[startRow][startCol][maxi] != -1) return dp[startRow][startCol][maxi];
            
        int up = solve(m, n, maxi-1, startRow-1, startCol);
        int left = solve(m, n, maxi-1, startRow, startCol-1);
        int right = solve(m, n, maxi-1, startRow, startCol+1);
        int down = solve(m, n, maxi-1, startRow+1, startCol);
        
        return dp[startRow][startCol][maxi] = (up%v + left%v + right%v + down%v)%v;
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        // vector<vector<vector<int>>> dp(m, vector<vector<int>>(n, vector<int>(maxMove, -1)));
        memset(dp,-1,sizeof(dp));
        return solve(m, n, maxMove, startRow, startColumn);
    }
};