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