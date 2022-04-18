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
    public static int sum = 0;
    public static int traverse(TreeNode root, boolean val){
        if(root == null) return sum;
        traverse(root.left,true);
        traverse(root.right,false);
        if(root.left==null && root.right==null && val == true){
            sum+=root.val;
        }
        return sum;
    }
    public int sumOfLeftLeaves(TreeNode root) {
        sum = 0;
        boolean flag = false;
        traverse(root,flag);
        return sum;
    }
}