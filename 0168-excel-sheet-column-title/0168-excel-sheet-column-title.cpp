class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans;
        int rem=0;
        while(columnNumber){
            rem=columnNumber%26;
            columnNumber = columnNumber/26;
            if(rem==0){
                ans+='Z';
                columnNumber -= 1;
            }
            else ans += (char)(64+rem);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};