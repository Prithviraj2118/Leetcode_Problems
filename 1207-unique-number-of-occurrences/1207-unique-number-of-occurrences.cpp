class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        vector<int> ans;
        unordered_map<int, int> m;
        
        for(int i=0; i<arr.size(); i++)
        {
            m[arr[i]]++;
        }
        
        unordered_set<int> s;
        
        for(int i=0; i<arr.size(); i++)
        {
            s.insert(m[arr[i]]);
        }
        
        return (s.size()==m.size());
    }
};