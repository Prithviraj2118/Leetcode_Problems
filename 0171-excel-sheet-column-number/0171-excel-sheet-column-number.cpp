class Solution {
public:
    int titleToNumber(string columnTitle) {
        int j=0, i=columnTitle.size()-1, ans=0, temp;
        while(i>=0){
            temp = int(columnTitle[i])-64;
            ans += temp*pow(26,j);
            j++, i--;
        }
        return ans;
    }
};