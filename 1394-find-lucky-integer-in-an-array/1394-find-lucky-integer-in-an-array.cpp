class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> m;
        int cnt=-1;
        for(auto x:arr){
            m[x]++;
        }
        for(auto x:m){
            if(x.first==x.second) cnt=max(cnt, x.first);
        }
        return cnt;
    }
};