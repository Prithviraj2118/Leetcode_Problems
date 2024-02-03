class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> dp(n + 1, 0);
        int sub_ans = 0, mx = 0;
        for(int i=n-1; i>=0; i--){
            mx = arr[i];
            sub_ans = 0;
            for(int j=i; j<min(i+k, n); j++){
                mx = max(mx, arr[j]);
                sub_ans = max(sub_ans, (j - i + 1)*mx + dp[j+1]);
            }
            dp[i] = sub_ans;
        }
        return dp[0];
    }
};