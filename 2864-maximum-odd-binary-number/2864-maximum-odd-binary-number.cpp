class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int ones=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1') ones++;
            s[i]='0';
        }
        
        s[s.size()-1] = '1';
        ones--;
        int i=0;
        while(ones--){
            s[i]='1';
            i++;
        }
        return s;
    }
};