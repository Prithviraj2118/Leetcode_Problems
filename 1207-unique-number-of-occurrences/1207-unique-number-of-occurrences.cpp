class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> m;
        
        for(int i=0; i<arr.size(); i++)
        {
            m[arr[i]]++;
        }
        
        unordered_set<int> s;
        
        for(auto x:m){
            if(s.find(x.second)!=s.end()) return false;
            s.insert(x.second);
        }
        
        return true;
    }
};