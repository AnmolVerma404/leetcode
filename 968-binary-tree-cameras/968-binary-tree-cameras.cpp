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
    int cam = 0;
    int camNeed(TreeNode * root){
        if(root == NULL) return 1;
        
        int lNode = camNeed(root->left);
        int rNode = camNeed(root->right);
        
        if(lNode == -1 || rNode == -1){
            cam++;
            return 0;
        }
        
        if(lNode == 0 || rNode == 0){
            return 1;
        }
        return -1;
    }
    int minCameraCover(TreeNode* root) {
        if(camNeed(root) == -1){
            cam++;
        }
        return cam;
    }
};