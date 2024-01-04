class Solution {
public:
    vector<string> findHighAccessEmployees(vector<vector<string>>& access_times) {
        unordered_map<string, vector<int>> m;
        
        for(auto x:access_times){
            int t = stoi(x[1]);
            m[x[0]].push_back(t);
        }
        
        // cout << m.size();
        
        int t1=0, t2, cnt=0;
        vector<string> ans;
        for(auto x: m){
            vector<int> temp = x.second;
            sort(temp.begin(), temp.end());
            for(int i=2;i<temp.size();i++){
                if(temp[i]-temp[i-2] < 100){
                    ans.push_back(x.first); 
                    break;
                }
            }
        }
        
        return ans;
    }
};