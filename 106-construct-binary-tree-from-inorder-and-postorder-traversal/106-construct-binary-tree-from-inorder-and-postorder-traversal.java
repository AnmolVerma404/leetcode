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
    HashMap<Integer,Integer>mp = new HashMap<>();
    int idx = 0;
    TreeNode treeBuilder(int[] io, int[] po,int s,int e){
        if(s>e) return null;
        TreeNode curr = new TreeNode(po[idx--]);
        int nri = mp.get(curr.val);
        curr.right = treeBuilder(io,po,nri+1,e);
        curr.left = treeBuilder(io,po,s,nri-1);
        return curr;
    }
    public TreeNode buildTree(int[] io, int[] po) {
        idx = io.length - 1;
        for(int i = 0;i<io.length;i++){
            mp.put(io[i],i);
        }
        // for(var i : mp.entrySet()){
        //     System.out.println(i.getKey() + " " + i.getValue());
        // }
        // TreeNode curr = new TreeNode(0);
        return treeBuilder(io,po,0,io.length-1);
        // return curr;
    }
}