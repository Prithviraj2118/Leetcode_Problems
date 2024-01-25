class Solution {
public:
    int solve(vector<vector<int>> &dp, int i, int j, string &text1, string &text2){
        
        if(i==0 || j==0) return 0;
        
        if(dp[i][j] != -1) return dp[i][j];
        if(text1[i-1] == text2[j-1]){
            return dp[i][j] = 1 + solve(dp, i-1, j-1, text1, text2);
        }
        
        int a = solve(dp, i-1, j, text1, text2);
        int b = solve(dp, i, j-1, text1, text2);
        
        return dp[i][j] = max(a, b);
    } 
    
    int longestCommonSubsequence(string text1, string text2) {
        
        // int i=0, j=0;
        int n = text1.size(), m = text2.size();
        vector<vector<int>> dp(n+1, vector<int> (m+1,-1));
        return solve(dp, n, m, text1, text2);
    }
};



 
    //BackTracking TC=2^n
    
//     void solve1(string &str, vector<string> &v, string text, int i){
//         if(i>=text.size()){
//             v.push_back(str);
//             return;
//         }
        
//         str += text[i];
//         solve1(str, v, text, i+1);
        
//         str.pop_back();
//         solve1(str, v, text, i+1);
//     }
    
//     void solve(string &str, set<string> &s, string text, int i){
//         if(i >= text.size()){
//             s.insert(str);
//             return;
//         }
//         str += text[i];
//         solve(str, s, text, i+1);
        
//         str.pop_back();
//         solve(str, s, text, i+1);
//     }
    
//     int longestCommonSubsequence(string text1, string text2) {
       
//         //First take put all subsequences from text1 in set, using Backtracking
//         int i=0;
//         set<string> s;
//         vector<string> v;
//         string str;
//         solve(str, s, text1, i);
//         i=0;
//         solve1(str, v, text2, i);
        
//         int mx = 0, k;
//         for(auto x:v){
//             if(s.find(x) != s.end()){
//                 k = x.size();
//                 mx = max(mx, k);
//             }
//         }
        
//         return mx;
    