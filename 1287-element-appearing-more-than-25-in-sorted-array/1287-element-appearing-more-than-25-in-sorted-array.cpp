class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int occ = arr.size()/4;
        unordered_map<int, int> m;
        
        for(int i=0; i<arr.size(); i++){
            m[arr[i]]++;
            if(m[arr[i]]>occ) return arr[i];
        }
        return -1;
    }
};