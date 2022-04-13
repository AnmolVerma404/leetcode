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
    void inOrder(TreeNode root,List<Integer>l){
        if(root!=null){
            inOrder(root.left,l);
            l.add(root.val);
            inOrder(root.right,l);
        }
    }
    public List<Integer> inorderTraversal(TreeNode root) {
        List<Integer>l = new ArrayList<>();
        inOrder(root,l);
        return l;
    }
}