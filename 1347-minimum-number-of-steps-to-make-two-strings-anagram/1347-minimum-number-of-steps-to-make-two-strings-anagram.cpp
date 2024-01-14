class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char, int> m1;
        int cnt=0;
        
        for(auto x:s){
            m1[x]++; //Stor string s chars in map m1
        }
        
        for(int i=0; i<t.size(); i++){
            if(m1[t[i]]>1){
                m1[t[i]]--;
                t[i]='.';   //Replace the current char by '.'
                cnt++;
            }
            
            else if(m1[t[i]]==1) {
                m1.erase(t[i]);
                t[i]='.';   //Replace the current char by '.'
                cnt++;
            }
        }
        
        return t.size()-cnt;
    }
};