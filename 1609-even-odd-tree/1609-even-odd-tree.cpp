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
    bool isEvenOddTree(TreeNode* root) {
        vector<TreeNode*> q{root};
        int l = -1;
        while (!q.empty()) {
            ++l;
            int val = 0;
            vector<TreeNode*> q1;
            for (auto n : q)
                if (n != nullptr) {
                    if (n->val % 2 == l % 2)
                        return false;
                    if (val != 0 && ((l % 2 && val <= n->val) || (!(l % 2) && val >= n->val)))
                        return false;           
                    val = n->val;
                    q1.push_back(n->left);
                    q1.push_back(n->right);
                }
            swap(q, q1);
        }
        return true;
    }
//     bool b = true;
//     bool isEvenOddTree(TreeNode* root) {
        
//         if(root == NULL) return true;
        
//         queue<TreeNode*> q;
//         q.push(root);
//         int n;
//         TreeNode* ptr = q.front();
//         TreeNode* ptr2 = q.front();
        
//         while(!q.empty())
//         {
//             n = q.size();
//             while(n--)
//             {
//                 if(b==true && q.front()->val%2==0) return false;
//                 if(b==false && q.front()->val%2==1) return false;
//                 if(ptr->left)
//                     q.push(ptr->left);
                
//                 if(ptr->right)
//                     q.push(ptr->right);
                
//                 ptr2=q.front();
//                 q.pop();
//                 ptr = q.front();
//                 if(ptr2<=ptr) return false;
//             }
//             b=!b;
//         }
//         return true;
//     }
};