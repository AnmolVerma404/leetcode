```
class Solution {
public:
Node* copyRandomList(Node* head) {
unordered_map<Node*,int>mp;
Node * curr = head;
int n = 0;
while(curr!=NULL){
mp[curr] = curr->val;
curr = curr->next;
n++;
}
curr = head;
while(curr->next!=NULL){
Node * temp = curr->random;
}
}
};
```