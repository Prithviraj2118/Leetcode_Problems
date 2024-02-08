class Solution {
public:
    int gg[10001];
    long long solve(vector<int> &dp, int i, int target, int n){
        if(target==n) return 0;
        if(target>n) return 1e8;
        
        if(gg[target] != -1) return gg[target];
        int a=0, b=INT_MAX, c;
        for(int j=i; j*j<=n; j++){
            c=j*j;
            a = 1 + solve(dp, j, target+c, n);
            b = min(b, a);
        }
        return gg[target]=b;
    }
    int numSquares(int n) {
        if(n==1 || n==2 || n==3) return n;
        memset(gg , -1 , sizeof(gg));

        vector<int> dp(n+1, -1);
        int ans = solve(dp, 1, 0, n);
        // if(ans>n/2) return -1;
        return ans;
    }
};