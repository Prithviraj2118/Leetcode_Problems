class Solution {
public:
    bool closeStrings(string word1, string word2) {
        
        if(word1.size() != word2.size()) return false;
        
        unordered_map<char, int> m1, m2;
        
        for(auto x:word1)
        {
            m1[x]++;
        }
        
        for(auto x:word2)
        {
            if(m1.find(x) == m1.end()) return false;
            m2[x]++;
        }
        
        map<int, int> m11, m22;
        
        for(auto x:m1)
        {
            m11[x.second]++;
        }
        
        for(auto x:m2)
        {
            m22[x.second]++;
        }
        
        if(m11 == m22) return true;
        
        return false;
    }
};