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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        int res = 1;
        queue<pair<TreeNode * , int>>q;//Node and index in queue as pair
        q.push({root,0});
        while(!q.empty()){
            int size = q.size();//Therefore will only traverse to the size of current level
            int start = q.front().second;
            int end = q.back().second;
            res = max(res,end - start+1);
            for(int i = 0;i<size;i++){
                auto p = q.front();
                int idx = p.second - start;
                q.pop();
                if(p.first->left!=NULL){
                    q.push({p.first->left,(long long)2*idx + 1});
                }
                if(p.first->right!=NULL){
                    q.push({p.first->right,(long long)2*idx + 2});
                }
            }
        }
        return res;
    }
};