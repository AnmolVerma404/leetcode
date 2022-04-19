class Solution {
    TreeNode prev = new TreeNode(Integer.MIN_VALUE);
    TreeNode t1 = null;
    TreeNode t2 = null;
    private void inOrder(TreeNode root){
        if(root == null )return;
        inOrder(root.left);
        if(t1==null && prev.val>root.val){
            t1 = prev;
        }
        if(t1!=null && prev.val>root.val){
            t2 = root;
        }
        prev = root;
        inOrder(root.right);
    }
    public void recoverTree(TreeNode root) {
        inOrder(root);
        int temp = t1.val;
        t1.val = t2.val;
        t2.val = temp;
    }
}