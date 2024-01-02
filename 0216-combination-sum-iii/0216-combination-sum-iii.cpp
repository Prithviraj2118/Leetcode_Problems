class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
    set<int> s;
    int sum=0;
    
    void solve(int i, int k, int n){
        if(temp.size()==k && sum==n){
            ans.push_back(temp);
            return;
        }
        
        if(i>9) return;
        
        temp.push_back(i);
        sum+=i;
        solve(i+1, k, n);
        
        sum-=i;
        temp.pop_back();
        solve(i+1, k, n);
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        int i=1;
        solve(i, k, n);
        return ans;
    }
};