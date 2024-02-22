class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1) return 1;
        unordered_map<int, int> m1;
        unordered_set<int> s;
        int mx = 0, mx_el;
        for(auto x:trust){
            s.insert(x[0]);
            m1[x[1]]++;
            if(mx < m1[x[1]]){
                mx = m1[x[1]];
                mx_el = x[1];
            }
        }
        if(mx==n-1 && s.find(mx_el)==s.end()) return mx_el;
        return -1;
    }
};