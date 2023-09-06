class Solution {
public:
    int countGoodSubstrings(string s) {
        int i=0, j=0, cnt=0;
        map<int, int> m;
        while(j-i < 3 && j<s.size()){
            m[s[j]]++;
            j++;
        }
        
        if(m.size()==3) cnt++;
        
        while(j<s.size()){
            m[s[j]]++;
            j++;
            if(m[s[i]]==1) m.erase(s[i]);
            else m[s[i]]--;
            i++;
            
            if(m.size()==3) cnt++;
        }
        return cnt; 
    }
};