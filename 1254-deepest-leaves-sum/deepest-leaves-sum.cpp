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

    int height(TreeNode* root) {
        if(root == nullptr) return 0;

        int lh = height(root->left);
        int rh = height(root->right);

        return 1 + max(lh, rh);
    }

    int  dfs(TreeNode* root, int height) {

        if(root==nullptr) return 0;

        int sum=0;
        if(height == 1)
            sum+=root->val;

      sum+=dfs(root->left, height - 1);
     sum+=dfs(root->right, height - 1);

        return sum;
    }

    int deepestLeavesSum(TreeNode* root) {

         int h = height(root);

        return dfs(root, h);


        
    }
};