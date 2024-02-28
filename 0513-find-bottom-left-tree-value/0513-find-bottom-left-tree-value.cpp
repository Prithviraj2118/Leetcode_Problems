/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int mx=0, ans;
    void solve(int lvl, TreeNode* root){
        if(!root) return;
        
        solve(lvl+1, root->left);
        solve(lvl+1, root->right);
        
        if(!root->left && !root->right && lvl>mx){
            mx=lvl;
            ans=root->val;
        }  
    }
    int findBottomLeftValue(TreeNode* root) {
        solve(1, root);
        return ans;
    }
};









// class Solution {
// public:
//     void solve(TreeNode* root, int cnt, int &max, int &ans)
//     {
//         if(root == NULL)
//             return;
        
//         cout << cnt << max << endl;
        
//         solve(root->left, cnt++, max, ans);
//         if(cnt > max)
//         {
//             ans = root->val;
//             max = cnt;
//         }
//         solve(root->right, cnt++, max, ans);
//     }
    
//     int findBottomLeftValue(TreeNode* root) {
        
//         int cnt = 0, max = 0;
//         int ans;
        
//         solve(root, cnt, max, ans);
        
//         return ans;
//     }
// };