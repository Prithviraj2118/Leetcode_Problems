class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int ans=0;
        int l = max(s1.size(), max(s2.size(), s3.size()));
        int n=min(s1.size(), min(s2.size(), s3.size()));
        ans=s1.size()-n + s2.size()-n + s3.size()-n;
        
        for(int i=0; i<n; i++){
            if(s1[i]!=s2[i] || s1[i]!=s3[i] || s2[i]!=s3[i]){
                if(i==0) return -1;
                return ans + (n-i)*3;
            }
        }
        return ans;
    }
};


