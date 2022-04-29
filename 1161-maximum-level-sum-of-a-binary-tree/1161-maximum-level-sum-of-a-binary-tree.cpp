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
    int maxLevelSum(TreeNode* root) {
        int mx = INT_MIN;
        int level = 0,mxlevel = 0;
        queue<TreeNode *>q;
        q.push(root);
        while(!q.empty()){
            int currmx = 0;
            ++level;
            for(int i =q.size();i>0;i--){
                TreeNode * t = q.front();
                q.pop();
                currmx+=t->val;
                if(t->left!=NULL) q.push(t->left);
                if(t->right!=NULL) q.push(t->right);
            }
            if(currmx>mx){
                mx = currmx;
                mxlevel = level;
            }
        }
        return mxlevel;
    }
};