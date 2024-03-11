class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> m;
        string str;
        
        for(auto x:s){
            m[x]++;
        }
        
        int k;
        for(auto x:order){
            if(m.find(x) != m.end()){
                k=m[x];
                while(k--){
                    str += x;
                }
                m.erase(x);
            }
        }
        
        for(auto x :m){
            k=x.second;
            while(k--){
                str += x.first;
            }
        }
        return str;
    }
};