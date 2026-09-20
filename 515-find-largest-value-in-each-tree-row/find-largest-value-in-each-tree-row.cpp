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
    vector<int> largestValues(TreeNode* root) {

        vector<vector<int>>inord;
         vector<int>ans;
        if(root==nullptr) return ans;
       

        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            int size=q.size();
            vector<int>level;
            int num=INT_MIN;

        for(int i=0;i<size;i++){
            TreeNode*node=q.front();
            q.pop();
            
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);

            num=max(num,node->val);
        }
        ans.push_back(num);

        }

        return ans;

        
    }
};