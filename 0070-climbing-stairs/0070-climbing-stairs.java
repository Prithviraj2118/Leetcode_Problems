class Solution {
    public int solve(int[] dp, int i, int n){
        if(i == n) return 1;  // We reach nth step
        else if(i > n) return 0;  // Out of bound
        
        if(dp[i] != -1) return dp[i];
        
        int a = solve(dp, i + 1, n); // 1 step
        int b = solve(dp, i + 2, n); // 2 steps
            
        return dp[i] = a + b; // Total ways
    }
    
    public int climbStairs(int n) {
        int[] dp = new int[n];
        Arrays.fill(dp, -1);
        return solve(dp, 0, n);
    }

    public static void main(String[] args) {
        Solution solution = new Solution();
        System.out.println(solution.climbStairs(4)); // Replace 4 with any desired input
    }
}
