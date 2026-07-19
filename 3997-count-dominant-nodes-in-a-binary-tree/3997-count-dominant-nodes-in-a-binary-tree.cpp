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
    int countDominantNodes(TreeNode* root) {
        if(!root){
            return 0;
        }
        int ans=countDominantNodes(root->left)+countDominantNodes(root->right);
        int mxi=root->left?root->left->val:0;
        int mx1=root->right?root->right->val:0;
            if(root->val>=max(mxi,mx1)){
                  ans++;
            }
            else{
                root->val=max(mxi,mx1);
            }
       
        return ans;
    }
};