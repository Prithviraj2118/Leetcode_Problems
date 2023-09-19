class Solution {
public:
    int reverse(int x) {
        long reverse = 0, rem;
        bool f = false;
        if(x==-2147483648) return 0;
        long n;
        
        if(x<0){
            f = true;
            n = -x;
        }
        else n=x;
        
        while (n != 0) {
            rem = n% 10;
            reverse = reverse * 10 + rem;
            n /= 10;
        }
        if(reverse >= 2147483648) return 0;
        
        if(f==true) return -reverse;
        return reverse;
    }
};