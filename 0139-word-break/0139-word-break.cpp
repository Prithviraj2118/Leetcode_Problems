class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n =s.length();
        vector<bool>v(n,false);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(j==0 || v[j-1])
                {
                  if(find(wordDict.begin(), wordDict.end() ,s.substr(j,i-j+1))!=wordDict.end())
                  {
                      v[i]=true;
                      break;
                  }
                }
            }
        }
        return v[n-1];
    }
};