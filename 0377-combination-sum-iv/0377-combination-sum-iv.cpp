class Solution {
public:
    int solve(vector<int> &dp, int j, int sum, vector<int>& nums, int target){
        if(sum==target) return 1;
        else if(sum>target) return 0;
        
        if(dp[sum] != -1) return dp[sum];
        int a = 0 ;
        for(int i=0; i<nums.size(); i++){
           
            a +=  solve(dp, i, sum + nums[i], nums, target);
            
        }
        
        dp[sum] = a ;
        return a ;
    }
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(target+1, -1);
        return solve(dp, 0, 0, nums, target);
    }
};