class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        //TC = O(N)
        int n=nums.size();
        int sum=0, expected_sum=(n*(n+1))/2;
        for(auto x:nums){
            sum+=x;
        }
        return expected_sum-sum;  //Missng number
        
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