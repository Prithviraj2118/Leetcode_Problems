class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> m;
        for(auto x:nums){
            m[x]++;
        }
        priority_queue<int> pq;
        for(auto x:m){
            pq.push(x.second);
        }
        int k = pq.top(), cnt=0;
        while(!pq.empty() && pq.top()==k){
            cnt++;
            pq.pop();
        }
        return k*cnt;
    }
};