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

    int dfs(TreeNode* parent,TreeNode*grand,TreeNode* root){

        int sum=0;
        if(root==nullptr) return 0;

      sum+= dfs(root,parent,root->left);
       sum+= dfs(root,parent,root->right);

         if(grand!=nullptr && (grand->val)%2==0){
            sum+=root->val;
        }

        return sum;

    }

    int sumEvenGrandparent(TreeNode* root) {

        return dfs(nullptr,nullptr,root);
        
    }
};