class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> ans;
        
        ans.push_back({1});
        if(numRows == 1) return ans;
        ans.push_back({1,1});
        if(numRows==2) return ans;
        
        vector<int> temp = {1,1}, var;
        while(numRows >= 3){
            var.push_back(1);
            for(int i=0; i<temp.size()-1; i++){
                var.push_back(temp[i]+temp[i+1]);
            }
            var.push_back(1);
            numRows--;
            temp = var;
            ans.push_back(var);
            var.clear();
        }
        
        return ans;
    }
};