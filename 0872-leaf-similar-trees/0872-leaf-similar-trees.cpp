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
void solve(TreeNode* root, vector<int> &ans)
{
    if(root == NULL) return;
    
    solve(root->left, ans); //Left Subtree call
    solve(root->right, ans);  //Right Subtree call

    if(!root->left && !root->right) ans.push_back(root->val); //Add leaf node
}

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        
        vector<int> v1, v2;

        solve(root1, v1);
        solve(root2, v2);

        return (v1==v2);
    }
};