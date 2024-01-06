class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int v;
        // cout << nums[nums.size()/2] << nums[(nums.size()/2)-1];
        if(nums.size()%2==0) v=(nums[nums.size()/2] + nums[(nums.size()/2)-1])/2;
        else v = nums[nums.size()/2];
        
        int ans=0;
        for(int i=0; i<nums.size(); i++){
            ans += abs(nums[i]-v);
        }
        return ans;
    }
};