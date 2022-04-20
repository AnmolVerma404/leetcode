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
    unordered_map<int,int>mp;
    void inOrder(TreeNode * root){
        if(root){
            inOrder(root->left);
            mp[root->val]++;
            inOrder(root->right);
        }
    }
    vector<int> findMode(TreeNode* root) {
        vector<int>v;
        inOrder(root);
        int mx = INT_MIN;
        for(auto i : mp){
            mx = max(mx,i.second);
        }
        for(auto i : mp){
            if(i.second == mx){
                v.push_back(i.first);
            }
        }
        return v;
    }
};