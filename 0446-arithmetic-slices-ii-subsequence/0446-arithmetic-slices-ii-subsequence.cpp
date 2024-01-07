class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        long long ans=0;
        vector<map<long long,int>>dp(n);
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                long long diff=(long long)nums[i]-(long long)nums[j];
                int cnt=0;
                if(dp[j].find(diff)!=dp[j].end()){
                    cnt=dp[j][diff];
                }
                dp[i][diff]+=cnt+1;
                ans+=cnt;
            }
        }
        return ans;
    }
};