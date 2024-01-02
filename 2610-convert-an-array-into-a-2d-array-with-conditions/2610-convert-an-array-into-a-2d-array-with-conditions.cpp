class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans;
        
        unordered_map<int, int> m;
        for(auto x:nums){
            m[x]++;
        }
        
        vector<int> temp;
        
        while(!m.empty()){
            for(auto x:m){
                if(x.second>0){
                    temp.push_back(x.first);
                    m[x.first]--;
                }
            }
            
            if(temp.size()==0) return ans;
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
    }
};