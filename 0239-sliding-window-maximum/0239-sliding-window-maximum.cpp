class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        deque<int> que;

        vector<int> ans;

        for(int ind=0;ind<nums.size();ind++)
        {
            // Remove Smaller elements than current
            while(!que.empty() && nums[ind]>nums[que.back()])
            {
                que.pop_back();
            }
            
            // Remove elements that are out of window
            int start = ind-k+1;
            if(!que.empty() && que.front()<start)
            {
                que.pop_front();
            }

            // Push the current element
            que.push_back(ind);

            // If window of k is created
            if(ind>=k-1)
            {
                ans.push_back(nums[que.front()]);
            }
        }

        return ans;
    }
};