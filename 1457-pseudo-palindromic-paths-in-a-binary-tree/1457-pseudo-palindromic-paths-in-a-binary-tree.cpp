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
    void solve(TreeNode* root, int cnt){
        if(!root) return;
            
        m[root->val]++;
        solve(root->left, cnt+1);
        solve(root->right, cnt+1);
        
        if(root->left==NULL && root->right==NULL){
            for(auto x: m){
                if(cnt%2==1){
                    if(x.second%2==1){
                        if(b == false){
                            b = true;
                            v=0;
                            break;
                        }
                        else b=false;
                    }
                }
                else{
                    if(x.second%2==1){
                        v=0;
                        break;
                    }
                }
            }
            if(v==1){
                ans+=1;
            }
            v=1;
            b=true;
        }
        
        if(m[root->val]>1) m[root->val]--;
        else m.erase(root->val);
    }
    unordered_map<int, int> m;
    bool b=true;
    int ans=0, v=1;
    int pseudoPalindromicPaths (TreeNode* root) {
        solve(root, 1);
        return ans;
    }
};