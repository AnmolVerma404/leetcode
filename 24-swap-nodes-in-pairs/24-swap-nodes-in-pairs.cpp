/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        int size = 0;
        ListNode * curr = head;
        while(curr!=NULL){
            curr = curr->next;
            size++;
        }
        // cout<<size;
        if(size<2) return head;
        curr = head;
        while(curr!=NULL){
            if(curr->next==NULL) break;
            int temp = curr->next->val;
            curr->next->val = curr->val;
            curr->val = temp;
            curr = curr->next->next;
        }
        return head;
    }
};