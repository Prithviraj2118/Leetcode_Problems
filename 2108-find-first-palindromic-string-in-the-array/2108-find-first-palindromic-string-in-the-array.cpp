class Solution {
public:
    bool solve(string s){
        int i=0, j=s.size()-1;
        while(i<j){
            if(s[i]==s[j]) i++, j--;
            else return false;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        string ans;
        for(auto x:words){
            if(solve(x)) return x;
        }
        return "";
    }
};