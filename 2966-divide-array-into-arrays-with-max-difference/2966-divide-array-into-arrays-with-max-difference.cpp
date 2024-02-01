class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>> ans;
        int i=0;
        sort(nums.begin(), nums.end());
        vector<int> temp;
        while(i<nums.size()-2){
            temp.clear();
            if(nums[i+2]-nums[i]>k) return {};
            else{
                temp.push_back(nums[i]);
                temp.push_back(nums[i+1]);
                temp.push_back(nums[i+2]);
            }
            i=i+3;
            ans.push_back(temp);
        }
        return ans;
    }
};