/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root == NULL) return NULL;
        vector<vector<Node*>>res;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<Node*>temp;
            while(n--){
                Node * top = q.front();
                q.pop();
                temp.push_back(top);
                if(top->left!=NULL) q.push(top->left);
                if(top->right!=NULL) q.push(top->right);
            }
            res.push_back(temp);
        }
        for(int i = 0;i<res.size();i++){
            for(int j = 0;j<res[i].size();j++){
                if(j == res[i].size()-1){
                    res[i][j]->next = NULL;
                    break;
                }
                res[i][j]->next = res[i][j+1];
                // cout<<res[i][j]->val<<" ";
            }
            // cout<<"\n";
        }
        return root;
    }
};