class Solution {
public:
    long long minimumSteps(string s) {
        long long cnt_1 = 0, cnt_0 = 0, cnt_swap=0;  //no.of ones
        int i=0;
        while(i<s.size()){
            if(s[i]=='1'){ 
                cnt_1++;
                i++;
            }
            else{
                while(i<s.size() && s[i]=='0'){
                    cnt_0++;
                    i++;
                }
                cout << cnt_1 << " " << cnt_0 << endl;
                cnt_swap += cnt_1*cnt_0; // if x==0
                cnt_0=0;
            }
        }
        return cnt_swap;
    }
};