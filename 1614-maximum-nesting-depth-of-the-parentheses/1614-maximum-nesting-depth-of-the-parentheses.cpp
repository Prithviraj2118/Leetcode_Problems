class Solution {
public:
    int maxDepth(string s) {
        stack<int> st;
        int cnt=0, n;
        for(auto x:s){
            if(x=='(') st.push(x);
            else if(x==')'){
                n=st.size();
                cnt=max(cnt, n);
                if(!st.empty()) st.pop();
            }
        }
        return cnt;
    }
};