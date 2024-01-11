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
    void traverse(TreeNode* root, vector<TreeNode*> &ans)
    {
        if(root == NULL)
            return;
        
        ans.push_back(root);
        traverse(root->left, ans);
        traverse(root->right, ans);
    }
    
    void solve(TreeNode* temp, TreeNode* ptr, int &max)
    {
        if(ptr == NULL)
            return;
        
        int var = temp->val- ptr->val;
        
        if(abs(var) > max)
            max = abs(var);
        
        solve(temp, ptr->left, max);
        solve(temp, ptr->right, max);
    }
    
    int maxAncestorDiff(TreeNode* root) {
        
        vector<TreeNode*> ans;
        
        traverse(root, ans);
        
        int max = 0;
        for(int i=0; i<ans.size(); i++)
        {
            TreeNode* ptr = ans[i];
            solve(ans[i], ptr, max);
        }
        
        return max;
    }
};