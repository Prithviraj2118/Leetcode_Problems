class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<int>> m;
        vector<vector<string>> ans;
        
        vector<string> a=strs;  //Duplicate of strs
        
        for(int i=0; i<a.size(); i++){
            sort(a[i].begin(), a[i].end());
            m[a[i]].push_back(i);
        }
        
        for(auto x:m){
            vector<string> temp;
            for(int i=0; i<x.second.size(); i++){
                temp.push_back(strs[x.second[i]]);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};