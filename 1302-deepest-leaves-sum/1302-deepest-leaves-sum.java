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
    public int mxh(TreeNode root){
        if(root == null) return 0;
        int l = mxh(root.left) + 1;
        int r = mxh(root.right) + 1;
        return Math.max(l,r);
    }
    public int deepestLeavesSum(TreeNode root) {
        int h = mxh(root);
        // System.out.println(h);
        int currh = 0;
        Queue<TreeNode>q = new LinkedList<>();
        q.add(root);
        List<Integer>l = new ArrayList<>();
        while(q.size()!=0){
            currh++;
            int n = q.size();
            for(int i = 0;i<n;i++){
                TreeNode top = q.peek();
                q.remove();
                if(top.left!=null) q.add(top.left);
                if(top.right!=null) q.add(top.right);
                if(currh == h){
                    l.add(top.val);
                }
            }
        }
        int res = 0;
        for(int i : l){
            res+=i;
        }
        return res;
    }
}