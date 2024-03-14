class Solution {
public:
    int pivotInteger(int n) {
        
        if(n == 1)
            return n;
        
        int s1 = 0;
        int s2 = (n*(n+1))/2;
        
        for(int i=1; i<=n; i++)
        {
            s2 = s2-(i-1);
            s1 = s1+(i);
            
            if(s1 == s2)
                return i;
        }
        
        return -1;
    }
};