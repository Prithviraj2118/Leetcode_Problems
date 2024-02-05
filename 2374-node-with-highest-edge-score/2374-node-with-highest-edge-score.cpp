class Solution {
public:
    int edgeScore(vector<int>& edges) {
        map<long, long> m;
        for(int i=0; i<edges.size(); i++){
            m[edges[i]]=m[edges[i]]+i;
        }
        int mx=INT_MIN, mx_freq=INT_MIN;
        for(auto x:m){
            if(x.second>mx_freq){
                mx=x.first;
                mx_freq=x.second;
            }
        }
        return mx;
    }
};