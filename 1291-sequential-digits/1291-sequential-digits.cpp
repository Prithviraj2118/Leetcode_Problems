class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        
        for(int i=1; i<=9; i++){
            int n=i;
            int next=n+1;
            
            while(n<=high && next<=9){
                n = (n*10) + next;
                next++;
                if(n>=low && n<=high) ans.push_back(n);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};