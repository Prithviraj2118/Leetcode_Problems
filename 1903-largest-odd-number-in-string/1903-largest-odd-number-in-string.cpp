class Solution {
public:
    string largestOddNumber(string num) {
        int i=num.size()-1;
        int ch;
        bool flag=true;
        string ans;
        
        while(i>=0){
            ch = int(num[i])-48;
            if(ch%2==1 && flag==true){
                ans += num[i];
                flag = false;
            }
            else if(flag == false) ans += num[i];
            i--;
        }  
        reverse(ans.begin(), ans.begin()+ans.size());
        return ans;
    }
};