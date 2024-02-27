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
    int mx=INT_MIN;
    int solve(TreeNode* root){
        if(root == NULL) return 0;
        
        int left_ht = solve(root->left);
        int right_ht = solve(root->right);
        mx = max(mx, (left_ht+right_ht));
        return max(left_ht, right_ht) +1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int ans = solve(root);
        return mx;
    }
};









       
//     public:
//     int height(TreeNode* root)
//     {
//         //Base Case
//         if(root == NULL)
//             return 0;
        
//         //Recursive Call
//         int left = height(root->left);
//         int right = height(root->right);
        
//         return max(left, right)+1;
//     }
    
// public:
//     int diameterOfBinaryTree(TreeNode* root) {
        
//         //Base Case
//         if(root == NULL)
//             return 0;
        
//         int op1 = diameterOfBinaryTree(root->left);
//         int op2 = diameterOfBinaryTree(root->right);
//         int op3 = height(root->left) + 1 + height(root->right);
        
//         return max(op1, max(op2, op3));
//     }
// };