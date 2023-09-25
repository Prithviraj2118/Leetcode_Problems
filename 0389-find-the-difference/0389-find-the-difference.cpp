class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> m;
        for(auto x:s){
            m[x]++;
        }
        
        for(auto x:t){
            if(m[x]==0) return x;
            else if(m[x]==1) m.erase(x);
            else m[x]--;
        }
        return '0';
    }
};