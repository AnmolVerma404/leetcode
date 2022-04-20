}
public void inOrder(TreeNode root){
if(root == null) return;
inOrder(root.left);
System.out.print(root.val + " ");
inOrder(root.right);
}
public int next() {
return 0;
}
public boolean hasNext() {
return true;
}
}
​
/**
* Your BSTIterator object will be instantiated and called as such:
* BSTIterator obj = new BSTIterator(root);
* int param_1 = obj.next();
* boolean param_2 = obj.hasNext();
*/
```