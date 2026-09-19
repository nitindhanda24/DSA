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

    TreeNode* fnx(int s,int e,vector<int>& nums){

        if(s>e) return nullptr;

        int x=(s+e)/2;

        TreeNode*root=new TreeNode(nums[x]);

        root->left=fnx(s,x-1,nums);
        root->right=fnx(x+1,e,nums);

        return root;
    }


    TreeNode* sortedArrayToBST(vector<int>& nums) {
       
        int n=nums.size(); 
        return fnx(0,n-1,nums);

        
    }
};