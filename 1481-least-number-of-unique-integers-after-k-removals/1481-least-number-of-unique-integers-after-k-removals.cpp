class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        
        int n = arr.size();
        map<int ,int>m;
        vector<int>t;
        
        for(int i=0; i<n; i++)
        {
            m[arr[i]]++;
        }
        
        arr.clear();
        for(auto i:m)
        {
            t.push_back(i.second);
        }
        
        sort(t.begin() ,t.end());
       // int a ;
      
            
            for(int i = 0 ; i<t.size();i++)
            {
                if(k >= t[i])
                {
                    k = k-t[i];
                }
                else
                {
                   // a = i;
                    return t.size() - i;
                }
            }
          
        
        return  0;
        
    }
};