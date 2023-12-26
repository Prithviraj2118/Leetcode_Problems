class Solution {
public:
    set<string> s1;
    int solve(vector<int> &dp, int i, string s, string temp){
        if(temp.size()==1){
            if(s1.find(temp) == s1.end()) return 0;
        }
        if(temp.size()>1){
            char m=temp[temp.size()-1], n=temp[temp.size()-2];
            int x = int(m) - int('0'), y = int(n) - int('0');
            if(y==0) return 0;
            else if((x+(y*10))>26) return 0;
            // cout << temp[temp.size()-1] << " " << temp[temp.size()-2] << endl;
        }
        
        temp.clear();
        
        if(i>=s.size()){
            cout << temp << endl;
            return 1;
        }
        
        if(dp[i]!=-1) return dp[i];
        
        temp += s[i];
        int a = solve(dp, i+1, s, temp);
        // temp.pop_back();
        
        int b=0;
        if(i+1 < s.size()){
            temp+=s[i];
            temp+=s[i+1];
            b = solve(dp, i+2, s, temp);
            // temp.pop_back();
            // temp.pop_back();
        }
        
        return dp[i]=a+b;
    }
    int numDecodings(string s) {
        string temp = "";
        string t;
        for(int i=1; i<=26; i++){
            t = to_string(i);
            s1.insert(t);
        }
        vector<int> dp(s.size(), -1);
        return solve(dp, 0, s, temp);
    }
};