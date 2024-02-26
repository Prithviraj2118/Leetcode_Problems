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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
//         //Base Case
//         if(p==NULL && q==NULL) return true;
        
//         if( (!p && q) || (p && !q) ) return false;
        
//         //Recursive Call
//         bool a = isSameTree(p->left, q->left);
//         bool b = isSameTree(p->right, q->right);
        
//         if(a && b && p->val == q->val)
//             return true;
        
//         return false;
        if(!p && !q) return true;
        else if((!p && q) || (p && !q)) return false;
        if(p->val != q->val) return false;
        
        bool a =isSameTree(p->left, q->left);
        bool b =isSameTree(p->right, q->right);
        
        return a&&b;
    }
};