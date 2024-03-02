class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            nums[i]=nums[i]*nums[i];
        }
        sort(nums.begin(), nums.end());
        return nums;
//         //TC = O(N)
        
//         int n = nums.size();
        
//         vector<int> ans(n);
        
//         int l=0, r=n-1;   //Use 2 ptrs
//         for(int i=n-1; i>=0; i--)
//         {
//             if(abs(nums[l]) > abs(nums[r]))
//             {
//                 ans[i] = pow(nums[l], 2);
//                 l++;
//             }
            
//             else
//             {
//                 ans[i] = pow(nums[r], 2);
//                 r--;
//             }
//         }
        
//         return ans;
        
        
        
        //Brute force
        //Push the squares of elments in arr
        //Then sort the elements
    }
};