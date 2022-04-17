class Solution {
    TreeNode r;
    public void inOrder(TreeNode root){
        if(root != null){
            inOrder(root.left);
            r.right = new TreeNode(root.val);
            r = r.right;
            System.out.print(root.val);
            inOrder(root.right);
        }
    }
    public TreeNode increasingBST(TreeNode root) {
        TreeNode temp = new TreeNode();
        r = temp;
        inOrder(root);
        return temp.right;
    }
}