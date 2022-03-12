class Solution {
public:
    Node* copyRandomList(Node* head) {
        map<Node*,Node*>mp;
        Node * curr = head;
        while(curr!=NULL){
            mp[curr] = new Node(curr->val);
            curr = curr->next;
        }
        curr = head;
        while(curr!=NULL){
            mp[curr]->next = mp[curr->next];
            mp[curr]->random = mp[curr->random];
            curr = curr->next;
        }
        return mp[head];
    }
};