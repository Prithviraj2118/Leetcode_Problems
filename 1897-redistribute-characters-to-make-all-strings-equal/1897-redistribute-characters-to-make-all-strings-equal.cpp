class Solution {
public:
    bool makeEqual(vector<string>& words) {
        // if(words.size()==1) return false;
        map<char, int> m;
        int mx=0;
        for(auto x:words){
            for(int j=0; j<x.size(); j++){
                m[x[j]]++;
                mx=max(mx, m[x[j]]);
            }
        }
        
        if(mx<words.size()) return false;
        int n = words.size();
        for(auto x:m){
            if(x.second%n>0 || x.second < n) return false;
        }
        
        return true;
    }
};