class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        map<char, int> m;
        int v=0, mx=-1;
        for(int i=0; i<s.size(); i++){
            if(m.find(s[i]) == m.end()) m[s[i]] = i;
            else v = i-m[s[i]];
            
            mx = max(mx, v);
        }
        return mx-1;
        // return -1;
    }
};