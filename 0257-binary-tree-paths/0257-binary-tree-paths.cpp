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
    vector<string> arr;
    void solve(TreeNode* root, string str){
        if(!root) return;
        
        string s = to_string(root->val);
        solve(root->left, str+s+"->");
        solve(root->right, str+s+"->");
        if(!root->left && !root->right) {
            s=to_string(root->val);
            str+=s;
            arr.push_back(str);
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string str;
        solve(root, str);
        return arr;
    }
};