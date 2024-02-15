class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        
        unordered_map<int, int> m;
        priority_queue<pair<int, int>> pq;
        pair<int, int> p;
        for(auto x:nums){
            m[x]++;
        }
        for(auto x:m){
            p.first=-x.second, p.second=x.first;
            pq.push(p);
        }
        nums.clear();
        int k;
        while(!pq.empty()){
            k=-pq.top().first;
            while(k--){
                nums.push_back(pq.top().second);
            }
            pq.pop();
        }
        return nums;
    }
};