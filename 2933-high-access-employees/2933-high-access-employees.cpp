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
        for(auto &it: m){
            vector<int> &time = it.second;
            sort(time.begin(), time.end());
            for(int i=2;i<time.size();i++){
                if(time[i]-time[i-2] < 100){
                    ans.push_back(it.first); 
                    break;
                }
            }
        }
        
        return ans;
    }
};