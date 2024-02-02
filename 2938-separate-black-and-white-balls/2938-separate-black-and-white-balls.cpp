class Solution {
public:
    long long minimumSteps(string s) {
        long long cnt_1 = 0, cnt_swap = 0;  //no.of ones
        for(auto x:s){
            if(x=='1') cnt_1++;
            else cnt_swap += cnt_1; // if x==0
        }
        return cnt_swap;
    }
};