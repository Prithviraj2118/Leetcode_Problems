class Solution {
public:
    string solve(string s){
        int i=0, j=s.size()-1;
        while(i<j){
            swap(s[i], s[j]);
            i++, j--;
        }
        return s;
    }
    string firstPalindrome(vector<string>& words) {
        string ans;
        for(auto x:words){
            ans=x;
            ans = solve(ans);
            if(ans==x) return x;
        }
        return "";
    }
};