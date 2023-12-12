class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> pq;
        
        for(auto x:nums){
            pq.push(-x);
            if(pq.size()>2) pq.pop();
        }
        
        int ans=1;
        while(!pq.empty()){
            ans *= ((-pq.top())-1);
            pq.pop();
        }
        return ans;
    }
};