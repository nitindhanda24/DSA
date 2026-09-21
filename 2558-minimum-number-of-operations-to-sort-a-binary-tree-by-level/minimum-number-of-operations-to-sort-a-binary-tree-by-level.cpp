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

    int minimumOperations(TreeNode* root) {

        if(root==nullptr) return 0;

        queue<TreeNode*>q;
        q.push(root);
        int cnt=0;

        while(!q.empty()){
            int size=q.size();
            vector<int>level;

        for(int i=0;i<size;i++){
            TreeNode*node=q.front();
            q.pop();

            if(node->left!=nullptr) q.push(node->left);
            if(node->right!=nullptr) q.push(node->right);

            level.push_back(node->val);
        }
        int n=level.size();
        vector<int>s_lev=level;
        sort(s_lev.begin(),s_lev.end());
        unordered_map<int,int>mp;

        for(int i=0;i<n;i++){
            mp[level[i]]=i;
        }

        for(int i=0;i<n;i++){
              if(level[i] == s_lev[i])
                    continue;
             int ind = mp[s_lev[i]];

                mp[level[i]] = ind;
                mp[s_lev[i]] = i;
                swap(level[i],level[ind]);
                cnt++;
        }

        }

        return cnt;     
        
    }
};