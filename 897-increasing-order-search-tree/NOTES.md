```
class Solution {
public:
void inOrder(TreeNode * root,TreeNode * &newNode){
if(root){
inOrder(root->left,newNode);
newNode->right = new TreeNode(root->val);
newNode = newNode->right;
inOrder(root->right,newNode);
}
}
TreeNode* increasingBST(TreeNode* root) {
TreeNode * newNode = new TreeNode();
TreeNode * temp;
temp = newNode;
inOrder(root,newNode);
return temp->right;
}
};
```