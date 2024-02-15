class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long long sum=0;
        for(auto x:nums){
            sum+=x;
        }
        long long j=nums.size()-1, mx = nums[j], v = sum-mx;
        while(j>=2){
            if(v>mx) return sum;

            sum-=mx;
            j--;
            mx=nums[j];
            v=sum-mx;
        }
        return -1;
    }
};