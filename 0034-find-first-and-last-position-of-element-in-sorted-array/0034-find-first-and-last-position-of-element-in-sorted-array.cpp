class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> ans;
        
        if(nums.size()==0)
            return {-1,-1};
        
        if(nums.size() == 1 && nums[0] == target)
            return {0,0};
        if(nums.size() == 2 && nums[0] == target && nums[1] == target)
            return {0,1};
        int s = 1;
        int l = nums.size()-2;
        int mid;
        
        if(nums[0] == target)
            ans.push_back(0);
        else
        {
            while(s <= l)
            {
                mid = (s+l)/2;
                if(nums[mid] == target && nums[mid-1] != target)
                    ans.push_back(mid);

                if( nums[mid] > target || (nums[mid] == target && nums[mid-1] == target))
                    l = mid-1;

                else
                    s = mid+1;
            }
        }
        
//         for(int i=0; i<ans.size(); i++)
//         {
//             cout << ans[i];
//         }
//         cout << endl;
        
        
        s = 1, l= nums.size()-2;
        
        if(nums[nums.size()-1] == target)
        {
            ans.push_back(nums.size()-1);
        }
        
        else{
            while(s <= l)
            {
                mid = (s+l)/2;

                if(nums[mid] == target && nums[mid+1] != target)
                {
                    ans.push_back(mid);
                }

    //             for(int i=0; i<nums.size(); i++)
    //             {
    //                 cout << ans[i];
    //             }

                if( nums[mid] < target || (nums[mid]==target && nums[mid+1]==target))
                    s = mid+1;

                else
                    l = mid-1;
            }
        }
        
        if(ans.size() == 1)
        {
            ans.push_back(ans[0]);
            cout << "hs";
        }
        
        if(ans.size() == 0)
            return {-1,-1};
        
        return ans;
    }
};
