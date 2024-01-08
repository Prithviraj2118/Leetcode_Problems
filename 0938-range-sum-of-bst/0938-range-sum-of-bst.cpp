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
    int solve(TreeNode* root, int low, int high){
        if(!root) return 0;   //If root is null
        
        int left = solve(root->left, low, high);
        int right = solve(root->right, low, high);
        
        if(root->val>=low && root->val<=high) return left+right+root->val;
        return left+right;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        return solve(root, low, high);
        // return sum;
    }
};