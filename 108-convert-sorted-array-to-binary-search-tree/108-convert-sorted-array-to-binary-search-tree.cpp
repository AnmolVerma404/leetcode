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
    TreeNode * bs(vector<int> & v,int low,int high){
        if(low<=high){
            int mid = (low + high)/2;
            TreeNode * root = new TreeNode(v[mid]);
            root->left = bs(v,low,mid-1);
            root->right = bs(v,mid + 1,high);
            return root;
        }
        return NULL;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return bs(nums,0,nums.size()-1);
    }
};