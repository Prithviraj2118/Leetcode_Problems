class Solution {
public:
    int lengthOfLastWord(string s) {
        int l=s.size()-1, cnt=0;
        while(s[l]==' ') l--;
        
        while(l>=0 && s[l]!=' ') cnt++, l--;
        
        return cnt;
    }
};