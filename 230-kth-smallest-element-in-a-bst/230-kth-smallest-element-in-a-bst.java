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
    public static void inOrder(TreeNode root,List<Integer> l){
        if(root == null) return;
        inOrder(root.left,l);
        l.add(root.val);
        inOrder(root.right,l);
    }
    public int kthSmallest(TreeNode root, int k) {
        List<Integer> l = new ArrayList<>();
        inOrder(root,l);
        return l.get(k-1);
    }
}