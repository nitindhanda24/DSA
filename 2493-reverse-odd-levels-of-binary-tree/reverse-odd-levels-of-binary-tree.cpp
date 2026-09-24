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

    void dfs(int lev,TreeNode* l,TreeNode* r){

        if(l==nullptr || r==nullptr) return ;

        if(lev%2!=0){
            swap(l->val,r->val);
        }

        dfs(lev+1,l->left,r->right);
         dfs(lev+1,l->right,r->left);


    }

    TreeNode* reverseOddLevels(TreeNode* root) {

         dfs(1,root->left,root->right);
        return root;


        
    }
};