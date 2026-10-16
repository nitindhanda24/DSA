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

    int height(TreeNode* root){
        if(root==nullptr) return 0;
        int lh=height(root->left);
        int rh=height(root->right);

        return max(lh,rh)+1;
    }

    vector<vector<string>> printTree(TreeNode* root) {

        int h=height(root);
         int m=h;
        int n=(pow(2,h)-1);

        vector<vector<string>>ans(m,vector<string>(n,""));

        if(root==nullptr) return ans;
       

       queue<pair<TreeNode*,pair<int,int>>>q;

       q.push({root,{0,(n-1)/2}});
       ans[0][(n-1)/2]=(to_string(root->val));

       while(!q.empty()){

        TreeNode* node=q.front().first;
        int r=q.front().second.first;
        int c=q.front().second.second;
        q.pop();

        if(node->left){

            ans[r+1][(c-pow(2,(h-r-2)))]=to_string(node->left->val);

            q.push({node->left,{r+1,(c-pow(2,(h-r-2)))}});
            
        }

         if(node->right){

            ans[r+1][(c+pow(2,(h-r-2)))]=to_string(node->right->val);

            q.push({node->right,{r+1,(c+pow(2,(h-r-2)))}});
            
        }


       }

       return ans;
  
    }
};