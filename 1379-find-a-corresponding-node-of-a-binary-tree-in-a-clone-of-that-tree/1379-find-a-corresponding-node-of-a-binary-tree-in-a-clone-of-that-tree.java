/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */

class Solution {
    int val = 0;
    TreeNode res;
    public void inOrder(TreeNode root){
        if(root==null) return;
        inOrder(root.left);
        if(root.val == val) res = root;
        inOrder(root.right);
    }
    public final TreeNode getTargetCopy(final TreeNode o, final TreeNode c, final TreeNode t) {
        if(o == null) return c;
        val = t.val;
        inOrder(c);
        return res;
    }
}