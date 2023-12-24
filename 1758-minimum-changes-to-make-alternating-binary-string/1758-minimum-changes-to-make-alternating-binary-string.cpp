class Solution {
public:
    int minOperations(string s) {
        int a=0, b=0;
        
        char flag = '0'; 
        for(auto x:s){
            if(flag!=x) a++;
            if(flag=='0') flag ='1';
            else flag='0';
            
        }
        
        flag = '1';
        for(auto x:s){
            if(flag!=x) b++;
            if(flag=='0') flag ='1';
            else flag='0';
        }
        
        return min(a, b);
    }
};