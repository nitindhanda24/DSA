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

    void inorder(TreeNode* root,vector<int>&inord){
        if(root==nullptr) return;
        inorder(root->left,inord);
        inord.push_back(root->val);
        inorder(root->right,inord);
    }

    void fnx(TreeNode* root,vector<int>&inord,int &i){
         if(root==nullptr) return ;
         fnx(root->left,inord,i);
         root->val=inord[i];
         i++;
         fnx(root->right,inord,i);

    }



    void recoverTree(TreeNode* root) {

        vector<int>inord;
        inorder(root,inord);
        sort(inord.begin(),inord.end());
        int i=0;

        fnx(root,inord,i);

        
    }
};