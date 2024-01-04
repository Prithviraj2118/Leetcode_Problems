class Solution {
public:
    int countDistinct(vector<int>& nums, int k, int p) {
        set<vector<int>> s; //Use set to store DISTINCT subarrays
        
        for(int i=0; i<nums.size(); i++){
            vector<int> temp;
            for(int j=i; j<nums.size(); j++){
                temp.push_back(nums[j]);
                s.insert(temp);
            }
        }
        
        int num_of_subarr=0, cnt=0; 
        for(auto x:s){
            cnt=0;
            for(int i=0; i<x.size(); i++){
                if(x[i]%p==0) cnt++;  //cnt of arr elements divisible by p
            }
            if(cnt<=k) num_of_subarr++;  //No. of distinct subarr 
        }
        return num_of_subarr;
    }
};