```
class Solution
{
public:
int l = 0, h = 0;
TreeNode *insert(TreeNode * root, int val)
{
if (root != NULL)
{
root = new TreeNode(val);
return root;
}
if (val < root->val)
{
root->left = insert(root->left, val);
}
else
{
root->right = insert(root->right, val);
}
return root;
}
void inOrder(TreeNode * root, TreeNode * n)
{
if (root == NULL)
return;
inOrder(root->left, n);
if (root->val >= l && root->val <= h)
{
insert(n, root->val);
}
inOrder(root->right, n);
}
TreeNode *trimBST(TreeNode *root, int low, int high)
{
TreeNode * n = new TreeNode();
l = low;
h = high;
inOrder(root, n);
return n;
}
};
```