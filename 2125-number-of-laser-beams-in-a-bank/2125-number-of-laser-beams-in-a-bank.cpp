class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n=0, a=0, b=0;
        
        for(int j=0; j<bank[0].size(); j++){
            if(bank[0][j]=='1') a++;
        }
        
        for(int i=1; i<bank.size(); i++){
            for(int j=0; j<bank[i].size(); j++){
                if(bank[i][j]=='1') b++;
            }
            
            if(b>0) 
            {
                n+=(a*b);
                a=b;
                b=0;
            }
        }
        
        return n;
    }
};