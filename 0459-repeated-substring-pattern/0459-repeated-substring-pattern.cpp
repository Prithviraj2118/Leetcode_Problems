class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string temp, temp2;
        int l=s.size()/2;
        cout << s.size();
        for(int i=0; i<l; i++){
            temp2.clear();
            temp += s[i];
            temp2 = temp;
            while(temp2.size() < s.size()){
                temp2 += temp;
            }
            if(temp2 == s) return true;
        }
        return false;
    }
};