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
    public List<Integer> rightSideView(TreeNode root) {
        List<List<Integer>> l = new ArrayList<List<Integer>>();
        List<Integer> res = new ArrayList<Integer>();
        if(root==null) return res;
        Queue<TreeNode> q = new LinkedList<>();
        q.add(root);
         // System.out.print("E");
        while(q.size()!=0){
            int n = q.size();
            List<Integer> temp = new ArrayList<Integer>();
            while(n!=0){
                TreeNode top = q.peek();
                q.remove();
                temp.add(top.val);
                if(top.left!=null) q.add(top.left);
                if(top.right!=null) q.add(top.right);
                n--;
            }
            l.add(temp);
        }
        for(int i = 0;i<l.size();i++){
            int n = l.get(i).size();
            res.add(l.get(i).get(n-1));
            // for(int j = 0;j<n;j++){
            //     System.out.print(l.get(i).get(j) + " ");
            // }
        }
        return res;
        
    }
}