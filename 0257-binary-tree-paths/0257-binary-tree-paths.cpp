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
        
        solve(root->left, str+ to_string(root->val) +"->");  //Add the node val and arrow in
        solve(root->right, str+ to_string(root->val) +"->");  //string str
        
        if(!root->left && !root->right) {   //When leaf node, store string str in arr
            str+=to_string(root->val);
            arr.push_back(str);
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string str;
        solve(root, str);
        return arr;
    }
};