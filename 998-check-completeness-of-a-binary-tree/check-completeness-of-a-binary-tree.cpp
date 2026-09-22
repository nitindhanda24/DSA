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

    bool isCompleteTree(TreeNode* root) {

        if(root==nullptr) return false;

         queue<TreeNode*>q;
        q.push(root);
        int flag=1;

        while(!q.empty()){
            int size=q.size();
    

        for(int i=0;i<size;i++){
            TreeNode*node=q.front();
            q.pop();

            if(flag==0 && node!=nullptr) return false;

                if(node==nullptr){
                    flag=0;
                    continue;
                }

              q.push(node->left);  
             q.push(node->right);
        }
      
           
        }

        return true;
        
    }
};