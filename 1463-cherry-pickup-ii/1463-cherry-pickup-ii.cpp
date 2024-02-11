// class Solution {
// public:
//     int solve(int i1, int j1, int i2, int j2, vector<vector<int>>& grid){
//         if(1>=grid.size() || i2>=grid.size() || j1<0 || j2>=grid[0].size()) return -1e8;
//         if(i1==i2==grid.size()-1){
//             if(j1==j2) return grid[i1][j1];
//             else return grid[i1][j1]+grid[i2][j2];
//         }
        
//         if(j1>=j2) return -1e8;
        
//             int cherry=0;
    
//     // Same here we also check for whether they currently at the same cell or not .......
    
//         if(j1==j2){
            
//             cherry+= grid[i1][j1]; // Or grid[r2][c2] , as both are same......
            
//         }
        
//         else{
            
//             cherry+= grid[i1][j1] + grid[i2][j2];
            
//         } 

        
//         int ans=0;
//         for(int p=-1; p<=1; p++){
//             for(int q=-1; q<=1; q++){
//                 ans = max(ans, grid[i1][j1] + grid[i2][j2] + solve(i1+1, p, i2+1, q, grid));
//             }
            
//         }
//         cherry+=ans;
//         return cherry;
//     }
//     int cherryPickup(vector<vector<int>>& grid) {
//         return solve(0, 0, 0, grid[0].size()-1, grid);
//     }
// };


#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int cherryPickup(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        
        // Initialize DP array
        vector<vector<vector<int>>> dp(rows, vector<vector<int>>(cols, vector<int>(cols, -1)));
        
        // Start from the top row
        return dfs(grid, dp, 0, 0, cols - 1);
    }
    
private:
    int dfs(vector<vector<int>>& grid, vector<vector<vector<int>>>& dp, int row, int col1, int col2) {
        // If out of bounds or current cell is unreachable, return 0
        if (row >= grid.size() || col1 < 0 || col1 >= grid[0].size() || col2 < 0 || col2 >= grid[0].size() || grid[row][col1] == -1 || grid[row][col2] == -1)
            return 0;
        
        // If already visited, return the cached result
        if (dp[row][col1][col2] != -1)
            return dp[row][col1][col2];
        
        // If we reached the bottom row, return the cherry in this cell
        if (row == grid.size() - 1)
            return grid[row][col1] + (col1 != col2 ? grid[row][col2] : 0);
        
        int cherries = 0;
        
        // Consider all possible movements for both robots
        for (int i = -1; i <= 1; ++i) {
            for (int j = -1; j <= 1; ++j) {
                int newCol1 = col1 + i;
                int newCol2 = col2 + j;
                cherries = max(cherries, dfs(grid, dp, row + 1, newCol1, newCol2));
            }
        }
        
        // If both robots are not in the same cell, add cherries from both cells
        if (col1 != col2)
            cherries += grid[row][col1] + grid[row][col2];
        // Otherwise, add cherries from one cell only
        else
            cherries += grid[row][col1];
        
        // Cache the result
        return dp[row][col1][col2] = cherries;
    }
};
