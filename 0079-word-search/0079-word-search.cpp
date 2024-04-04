class Solution {
public:
    bool solve(int i, int j, vector<vector<char>>& board, string &word, int s)
    {
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size()) return false; //When out of box
        
        if(board[i][j] != word[s]) return false;    //If letter doesn't match
        
        if(s >= word.size()-1) return true;  //When the word is traversed
        
        board[i][j] = '.';  //Mark visited
        bool a = solve(i-1, j, board, word, s+1);
        bool b = solve(i, j-1, board, word, s+1);
        bool c = solve(i, j+1, board, word, s+1);
        bool d = solve(i+1, j, board, word, s+1);
        
        board[i][j] = word[s];  //Restore the visited
        return (a || b || c || d);  //Return true, if anyone is true
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        
        bool ans;
        int s = 0;
        
        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[i].size(); j++){
                if(board[i][j] == word[0])  //Search for start letter
                    ans = solve(i, j, board, word, s);
                
                if(ans == true) return true;   //If not true, search starting letter again
            }
        }
        return false;
    }
};