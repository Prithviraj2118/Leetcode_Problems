class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool a;
        if(nums[0] >= nums[nums.size()-1]) a=true;
        else if(nums[0] <= nums[nums.size()-1]) a=false;
        
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[0]>=nums[nums.size()-1] && nums[i]<nums[i+1]) return false;
            else if(nums[0]<=nums[nums.size()-1] && nums[i]>nums[i+1]) return false;
        }
        return true;
    }
};