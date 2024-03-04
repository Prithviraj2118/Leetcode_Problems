class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        // int cnt=0;
        // for(auto x:nums){
        //     if(x<k) cnt++;
        // }
        // return cnt;x
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>=k) return i;
        }
        return nums.size();
    }
};