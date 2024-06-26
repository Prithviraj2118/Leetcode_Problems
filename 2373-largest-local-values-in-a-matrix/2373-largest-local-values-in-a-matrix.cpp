class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>> ans(n-2, vector<int>(n-2, 0));
        for(int i=1;i<=n-2;i++){
            for(int j=1;j<=n-2;j++){
                int mx=0;
                for(int x=i-1;x<=i+1;x++){
                    for(int y=j-1;y<=j+1;y++){
                        mx=max(mx,grid[x][y]);  
                    }
                }
                ans[i-1][j-1]=mx;
            }
        }
        return ans;
    }
};
