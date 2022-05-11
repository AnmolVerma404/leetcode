// Hash Map of inOrder traversal with key the value of the node and value is the position of the node in the 
/*
-Here root is the curr Root node that might have left and right child node
-po and io are the pre and inOrder vector that are given in the problem
-s and e stands for the start and the end point of the subarray of inOrder traversal
-i stands for index and it define the current root node that we found from the preorder vector list
-Here the term subarray indicates the start and end point of vector that is passed in every recursion
*/
/*
preorder = [3,9,20,15,7], inorder = [9,3,15,20,7],s = 0,e = n-1,i = 0
                            mp.val = [0,1,2 ,3 ,4]
     1st :-
           root - 3 left(s = 0,e = 0,i = 1) right(s = 2,e = 4,i = 1)
     2nd :-
           root - 9 left(s = -1,e = -1,i = 2) right(s = -1,e = -1,i = 2)
     3rd :-
           root - 20 left
                        9,3,15,20,7(3)
                       /           \
                      9(9)       15,20,7(20)
                     / \        /       \
                 null null    15(15)    7(7)
                              / \      /  \ 
                           null null null null 
*/
class Solution {
public:
    int n = 0,i = 0;
    unordered_map<int,int>mp;
    TreeNode * treeBuilder(vector<int>& po, vector<int>& io,int s, int e){
        if(s>e){
            return NULL;
        }
        TreeNode * curr = new TreeNode(po[i++]);
        int nri = mp[curr->val];//nri - next root index
        // int nri;
        // for(int i=s;i<=e;i++){
        //     if(io[i]==curr->val){
        //         nri=i;
        //         break;
        //     }
        // }
        curr->left = treeBuilder(po,io,s,nri-1);
        curr->right = treeBuilder(po,io,nri+1,e);
        return curr;
    }
    TreeNode* buildTree(vector<int>& po, vector<int>& io) {
        n = po.size();
        for(int i = 0;i<io.size();i++){
            mp[io[i]] = i;
        }
        return treeBuilder(po,io,0,n-1);
    }
};