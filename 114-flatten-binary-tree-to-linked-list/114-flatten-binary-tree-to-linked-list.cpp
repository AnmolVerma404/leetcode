/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode * head = NULL;
    void preOrder(TreeNode * root){
        if(root->right) preOrder(root->right);
        if(root->left) preOrder(root->left);
        
        root->left = NULL;
        root->right = head;
        head = root;
    }
    void flatten(TreeNode* root) {
        if(root) preOrder(root);
    }
};