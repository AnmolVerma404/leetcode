/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
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
    List<Integer>l = new ArrayList<>();
    public TreeNode treeBuilder(int s,int e){
        if(s>e) return null;
        int m = (s+e)/2;
        TreeNode root = new TreeNode(l.get(m));
        root.left = treeBuilder(s,m-1);
        root.right = treeBuilder(m+1,e);
        return root;
    }
    public TreeNode sortedListToBST(ListNode head) {
        if(head==null) return null;
        ListNode curr = head;
        while(curr!=null){
            l.add(curr.val);
            curr = curr.next;
        }
        TreeNode root = treeBuilder(0,l.size()-1);
        return root;
    }
}