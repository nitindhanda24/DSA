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

    unordered_map<string,int>mp;
    vector<TreeNode*>ans;

    string fnx(TreeNode* root){

        if(root==nullptr) return "#" ;

        string l=fnx(root->left);
        string r=fnx(root->right);

        string curr=to_string(root->val)+","+l+","+r;
        mp[curr]++;

        if(mp[curr]==2){
            ans.push_back(root);
        }
    return curr;

    }


    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {

        fnx(root);
        return ans;
        
    }
};