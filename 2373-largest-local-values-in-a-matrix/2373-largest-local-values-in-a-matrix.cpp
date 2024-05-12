class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>> ans(n-2, vector<int>(n-2, 0));
        for(int i=0;i<n-2;i++){
            for(int j=0;j<n-2;j++){
                int mx=0;
                for(int x=i;x<i+3;x++){
                    for(int y=j;y<j+3;y++){
                        mx=max(mx,grid[x][y]);
                        cout<<grid[x][y]<<endl;
                    }
                }
                ans[i][j]=mx;
            }
        }
        return ans;
    }
};