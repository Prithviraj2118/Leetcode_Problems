class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums);
        int i=0, j=1;
        for(auto x:nums){
            if(x>0) ans[i]=x, i+=2;
            else ans[j]=x, j+=2;
        }
        return ans;
    }
};