class Solution {
public:
    int solve(vector<int>& dp, vector<int> &nums, int i){
        if(i>=nums.size()) return 0;
        
        if(dp[i] != -1) return dp[i];
        
      // /  int mx = INT_MAX;
        int a = nums[i] + solve(dp, nums, i+2); //2 steps(can't take adjacent)
        int b = nums[i] + solve(dp, nums, i+3); //3 steps
        
        return dp[i] = max(a, b);
    }
    int rob(vector<int>& nums) {
        int i;
        vector<int> dp(nums.size(), -1);
        return max(solve(dp, nums, 0), solve(dp, nums, 1));  //starting from 0
    }                                                        //starting from 1
};