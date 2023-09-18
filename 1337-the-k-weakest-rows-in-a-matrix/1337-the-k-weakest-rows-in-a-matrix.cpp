class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int cnt;
        vector<pair<int, int>> ans;
        pair<int, int> p;
        
        for(int i=0; i<mat.size(); i++){
            cnt=0;
            pair<int, int> p;
            for(int j=0; j<mat[i].size(); j++){
                if(mat[i][j]==1){
                    cnt++;
                }
                else{
                    break;
                }
            }
            p.first=cnt, p.second=i;
            ans.push_back(p);
        }
        
        sort(ans.begin(), ans.end());
        
        vector<int> arr;
        for(int i=0; i<k; i++){
            arr.push_back(ans[i].second);
        }
        
        return arr;
    }
};