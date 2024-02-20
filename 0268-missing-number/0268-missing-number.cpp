class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        //TC = O(N)
        unordered_map<int, int> m;
        
        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]]++;
        }
        
        for(int i=0; i<nums.size(); i++)
        {
            if(m[i] == 0)
                return i;
        }
        
        return nums.size();
        
        /*
        // TC = O(n)
        
        int n = nums.size();    // size of array
        sort(begin(nums), end(nums));   //sort the array
        
        for(int i=0; i<n; i++)
        {
            if(nums[i]!=i)  
                return i;   
        }
        return n;    //If all elemnts are present from 0 to n-1, only 'n' will not be present*/
    }
};