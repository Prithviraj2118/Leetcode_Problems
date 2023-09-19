class Solution {
public:
    int reverse(int x) {
        long reverse = 0, rem;
        bool f = false;
        if(x==-2147483648) return 0;
        
        if(x<0){
            f = true;
            x = -x;
        }
        while (x != 0) {
            rem = x% 10;
            reverse = reverse * 10 + rem;
            x /= 10;
        }
        if(reverse >= 2147483648) return 0;
        
        if(f==true) return -reverse;
        return reverse;
    }
};