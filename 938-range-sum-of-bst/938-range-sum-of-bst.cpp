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
    int sum = 0,l = 0,h = 0;
    void inOrder(TreeNode * root){
        if(root){
            inOrder(root->left);
            if(root->val>=l && root->val<=h){
                sum+=root->val;
            }
            inOrder(root->right);
        }
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        sum = 0;
        l = low;
        h = high;
        inOrder(root);
        return sum;
    }
};