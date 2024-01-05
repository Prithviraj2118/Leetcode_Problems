class Solution {
public:
    int dp[2501][2501];
    int solve(vector<int>&old,vector<int>&newarray,int n,int m)
    {
        if(n<=0 || m<=0)
          return 0;
        if(dp[n][m]!=-1)
         return dp[n][m];
        if(old[n-1]==newarray[m-1])
          return dp[n][m]=1+solve(old,newarray,n-1,m-1);
        else{
            return dp[n][m]=max(solve(old,newarray,n-1,m),solve(old,newarray,n,m-1));
        }  
        
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        set<int>st(nums.begin(),nums.end());
        vector<int>v(st.begin(),st.end());
        int m=v.size();
        memset(dp,-1,sizeof(dp));
        return solve(nums,v,n,m);
    }
};
