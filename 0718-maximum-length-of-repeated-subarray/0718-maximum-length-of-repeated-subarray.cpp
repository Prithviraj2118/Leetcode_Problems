class Solution {
public:
    int mx = INT_MIN;

    int solve(vector<vector<int>>& dp, int i, int j, vector<int>& nums1, vector<int>& nums2) {
        if (i==nums1.size() || j==nums2.size()) return 0;

        if (dp[i][j] != -1) return dp[i][j];

        int cnt=0;  // This should be a local variable, not a class member

        if (nums1[i] == nums2[j]) 
            cnt = 1 + solve(dp, i + 1, j + 1, nums1, nums2);
        
        mx = max(mx, cnt);
        
        solve(dp, i + 1, j, nums1, nums2);
        solve(dp, i, j + 1, nums1, nums2);
        
        return dp[i][j] = cnt;
    }

    int findLength(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> dp(nums1.size(), vector<int>(nums2.size(), -1));
        solve(dp, 0, 0, nums1, nums2);
        return mx;
    }
};
