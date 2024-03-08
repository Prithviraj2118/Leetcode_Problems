class Solution {
public:
    int minimumLength(string s) {
        int i=0, j=s.size()-1;
        if(s.length()==1) return 1;
        while(i<j-1 && s[i]==s[j]){
            while(i<s.size() && s[i]==s[j]) i++;
            while(j>=0 && s[j]==s[i-1]) j--;
        }
        if(i>j) return 0;
        if(j==i+1){
            if(s[i]==s[j]) return 0;
            else return 2;
        }
        return j-i+1;
    }
};