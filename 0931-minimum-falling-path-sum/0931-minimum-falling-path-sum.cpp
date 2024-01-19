class Solution {
public:
    
    //SIMPLE BACKTRACKING
//     void solve(int m, int n, int &min_sum, int cur_sum, vector<vector<int>>& matrix)
//     {
//          // cout << m << " "<< n << endl; 
//         if(n < 0 || n >= matrix[0].size() || m>=matrix.size())
//         {
//             return;
//         }
            
//         cur_sum = cur_sum + matrix[m][n];
        
//         solve(m+1, n-1, min_sum, cur_sum, matrix);  //Left diag
//         solve(m+1, n, min_sum, cur_sum, matrix);    //Down
//         solve(m+1, n+1, min_sum, cur_sum, matrix);  //Right diag
        
//         if(cur_sum < min_sum  && m == matrix.size()-1)
//         {
//             min_sum = cur_sum;
//             // cout << cur_sum << endl;
//         }
//     }
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
//         int m = 0;
//         int n = 0;
//         int min_sum = INT_MAX, cur_sum;
//         for(int i=0; i<matrix[0].size(); i++)
//         {
//             cur_sum = 0;
//             cout << endl;
//             solve(0, i, min_sum, cur_sum, matrix);
//             cout << min_sum << endl; 
//         }
        
//         return min_sum;
        for (auto i = 1; i < matrix.size(); ++i)
        {
            for (auto j = 0; j < matrix.size(); ++j)
            {
                matrix[i][j] += min({ matrix[i-1][j], matrix[i-1][max(0,j-1)], matrix[i-1][min((int)matrix.size()-1,j+1)] });
            }
        }
        return *min_element(begin(matrix[matrix.size() - 1]), end(matrix[matrix.size() - 1]));
    }
};