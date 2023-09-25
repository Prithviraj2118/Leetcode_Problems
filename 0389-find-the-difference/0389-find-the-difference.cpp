class Solution {
public:
    char findTheDifference(string s, string t) {
        int s1=0, s2=0;
        for(int i=0; i<s.size(); i++){
            s1 += s[i];
            s2 += t[i];
        }
        s2+=t[t.size()-1];
        
        return (char)(s2-s1);
    }
};