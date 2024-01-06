class Solution {
public:
    string getHint(string secret, string guess) {
        
        int a=0, b=0;
        string ans;
        unordered_map<char, int> m1;
        unordered_map<char, int> m2;
        
        for(int i=0; i<secret.size(); i++){
            if(secret[i] == guess[i]) a++;
            
            else{
                m1[secret[i]]++;
                m2[guess[i]]++;
            }
        }
        
        for(auto x:m1)
        {
            if(m2.find(x.first) != m2.end()) b = b+min(x.second, m2[x.first]);
        }
        //Conversion of int to string
        ostringstream str1, str2;
 
        str1 << a;
        str2 << b;
        
        string s1 = str1.str();
        ans = ans+s1;
        ans.push_back('A');
        
        string s2 = str2.str();
        ans = ans+s2;
        ans.push_back('B');
        
        return ans;
    }
};