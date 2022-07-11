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
    vector<int> rightSideView(TreeNode* root) {
        if(!root) return {};
        vector<int>res;
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty()){
            int n = q.size();
            while(n--){
                auto top = q.front();
                q.pop();
                if(top->left!=NULL) q.push(top->left);
                if(top->right!=NULL) q.push(top->right);
                if(n == 0) res.push_back(top->val);
            }
        }
        return res;
    }
};