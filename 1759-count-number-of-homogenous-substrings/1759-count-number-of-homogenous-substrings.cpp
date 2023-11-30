class Solution {
public:
    int m = pow(10,9) + 7;
    int countHomogenous(string s) {
        //Sliding Window
        cout << s.size()  << endl;
        int i=0, j=0;
        
        long var=0, cnt=0;
        while(j<s.size()){
            if(s[i]!=s[j]){
                var = j-i;
                cnt += var*(var+1)/2;
                i=j;
            }
            j++;
        }
        
        var=j-i;
        cnt += var*(var+1)/2;
        int ans = cnt%m;
        
        return ans;
    }
};