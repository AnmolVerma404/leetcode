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
    ListNode* swapNodes(ListNode* head, int k) {
        int i = 1,n = 1;
        ListNode * curr = head;
        ListNode * first = new ListNode(),*second = new ListNode();
        while(curr!=NULL){
            curr = curr->next;
            n++;
        }
        curr = head;
        while(curr!=NULL){
            if(i == k){
                first = curr;
            }
            if(n-i == k){
                second = curr;
            }
            curr = curr->next;
            i++;
        }
        int temp = first->val;
        first->val = second->val;
        second->val = temp;
        return head;
        
    }
};