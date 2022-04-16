```
class Solution {
public:
int sum = 0;
void trav(TreeNode * root){
if(root){
trav(root->right);
sum+=root->val;
root->val = sum;
trav(root->left);
}
}
TreeNode* convertBST(TreeNode* root) {
sum = 0;
trav(root);
return root;
}
};
```