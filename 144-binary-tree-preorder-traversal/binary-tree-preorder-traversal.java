/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public List<Integer> preorderTraversal(TreeNode root) {
         ArrayList<Integer>v=new ArrayList();
        if(root==null) return v;

        Stack<TreeNode>st=new Stack<>();
      
        st.push(root);

        while(!st.isEmpty()){
            TreeNode node=st.peek();
            st.pop();
            v.add(node.val);

        if(node.right!=null){
            st.push(node.right);
        }
        if(node.left!=null){
            st.push(node.left);
        }
        }
        return v;
    }
}