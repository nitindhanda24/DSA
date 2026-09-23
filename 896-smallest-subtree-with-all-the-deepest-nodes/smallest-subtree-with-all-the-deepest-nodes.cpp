class Solution {
public:

    int height(TreeNode* root) {
        if(root == nullptr) return 0;

        int lh = height(root->left);
        int rh = height(root->right);

        return 1 + max(lh, rh);
    }

    TreeNode* dfs(TreeNode* root, int height) {

        if(root == nullptr)
            return nullptr;

        if(height == 1)
            return root;

        TreeNode* left = dfs(root->left, height - 1);
        TreeNode* right = dfs(root->right, height - 1);

        if(left != nullptr && right != nullptr)
            return root;

        if(left != nullptr)
            return left;

        return right;
    }

    TreeNode* subtreeWithAllDeepest(TreeNode* root) {

        int h = height(root);

        return dfs(root, h);
    }
};