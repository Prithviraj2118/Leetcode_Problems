class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
        
        vector<string> temp = nums;
        vector<int> ans;
        double pw, n;
        pair<string, int> p;
        for(int i=0; i<queries.size(); i++){
            
            pw=queries[i][1];
            priority_queue<pair<string, int>> pq;
            for(int j=0; j<temp.size(); j++){
                n = nums[j].size();
                string s=nums[j].substr(n-pw);
                p.first=s, p.second=j;
                pq.push(p);
            }
            int q=pq.size()-queries[i][0];
            
            while(q--){
                pq.pop();
            }
            ans.push_back(pq.top().second);
            temp=nums;
        }
        
        return ans;
    }
};