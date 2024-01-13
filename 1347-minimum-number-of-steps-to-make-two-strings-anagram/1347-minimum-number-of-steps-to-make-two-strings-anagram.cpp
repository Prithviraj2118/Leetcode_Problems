class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char, int> m1;
        int cnt=0;
        
        for(auto x:s){
            m1[x]++;
        }
        
        for(int i=0; i<t.size(); i++){
            if(m1[t[i]]>1){
                m1[t[i]]--;
                t[i]='.';
            }
            
            else if(m1[t[i]]==1) {
                m1.erase(t[i]);
                t[i]='.';
            }
        }
        
        for(auto x:t){
            if(x!='.') cnt++;
        }
        return cnt;
    }
};