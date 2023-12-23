class Solution {
public:
    int maxScore(string s) {
        int z=0, o=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1') o++;
        }
        
        int maxi=0;
        for(int i=0; i<s.size()-1; i++){
            if(s[i]=='0') z++;
            else o--;
            maxi=max(maxi, z+o);
        }
        return maxi;
    }
};