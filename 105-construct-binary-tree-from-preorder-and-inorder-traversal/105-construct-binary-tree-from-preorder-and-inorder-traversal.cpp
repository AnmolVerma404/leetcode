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
    int n,i;
    unordered_map<int,int>mp;
    TreeNode * func(vector<int>&po,vector<int>&io,int s,int e){
        if(s>e) return NULL;
        
        TreeNode * curr = new TreeNode(po[i++]);
        int nxt = mp[curr->val];
        
        curr->left = func(po,io,s,nxt-1);
        curr->right = func(po,io,nxt+1,e);
        return curr;
    }
    TreeNode* buildTree(vector<int>& po, vector<int>& io) {
        n = po.size();
        i = 0;
        for(int i = 0;i<n;++i) mp[io[i]] = i;
        return func(po,io,0,n-1);
    }
};