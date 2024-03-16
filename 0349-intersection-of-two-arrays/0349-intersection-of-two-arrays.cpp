class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        int i=0, j=0, temp=0;
        vector<int> ans;
        
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]==nums2[j]){
                ans.push_back(nums1[i]);
                temp=nums1[i];
                while(i<nums1.size() && nums1[i]==temp){
                    i++;
                }
                while(j<nums2.size() && nums2[j]==temp){
                    j++;
                }
            }
            else if(nums1[i]<nums2[j]){
                temp=nums2[j];
                while(i<nums1.size() && nums1[i]<temp) {
                    i++;
                }
            }
            else{
                temp=nums1[i];
                while(j<nums2.size() && nums2[j]<temp){
                    j++;
                }
            }
        }
        return ans;
    }
};