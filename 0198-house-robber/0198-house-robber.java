class Solution {
    public int rob(int[] nums) {
        int[] dp = new int[nums.length];
        Arrays.fill(dp, -1);
        return Math.max(solve(dp, nums, 0), solve(dp, nums, 1));
    }

    private int solve(int[] dp, int[] nums, int i) {
        if (i >= nums.length) return 0;

        if (dp[i] != -1) return dp[i];

        int a = nums[i] + solve(dp, nums, i + 2); // 2 steps(can't take adjacent)
        int b = nums[i] + solve(dp, nums, i + 3); // 3 steps

        return dp[i] = Math.max(a, b);
    }
}
