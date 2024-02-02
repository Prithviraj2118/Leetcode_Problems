class Solution {
public:
//     int solve(int i, vector<vector<int>> &dp, vector<int> v, vector<int>& nums, int target){
//         if(target == 0) return 0;
//         if(i<0 || target<0) return -1e8;
        
//         if(dp[i][target]!=-1){
//             cout << dp[i][target];
//             return dp[i][target];
//         }
//         v.push_back(nums[i]);
//         int take = 1 + solve(i-1, dp, v, nums, target-nums[i]); //Add 1 in subsq(Take)
        
//         v.pop_back();
//         int not_take = 0 + solve(i-1, dp, v, nums, target);  //No need to add 1 (Not take)
        
//         return dp[i][target]=max(take, not_take);
//     }
    
//     int lengthOfLongestSubsequence(vector<int>& nums, int target) {
//         vector<int> v;
//         vector<vector<int>> dp(nums.size(), vector<int> (target+1, -1));
//         int ans = solve(nums.size()-1, dp, v, nums, target);
//         return (ans>0)?ans : -1;  //if ans>0 return ans, else -1
//     }
    
    int solve(vector<int>&nums, int target, int ind, vector<vector<int>>&dp){
        // base case
        if(target == 0) return 0;
        if(ind<0 || target<0) return -1e8;
        if(dp[ind][target] != -1) return dp[ind][target];

        int take = 1 + solve(nums, target-nums[ind], ind-1, dp); // take wala case
        int notTake = 0 + solve(nums, target, ind-1, dp); // not take wala case

        return dp[ind][target] = max(take, notTake);
    }

    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>>dp(n, vector<int>(target+1, -1));
        int ans = solve(nums, target, n-1, dp);
        return ans>0 ? ans : -1;
    }
};