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
    ListNode* partition(ListNode* head, int x) {
        if(!head) return NULL;
        ListNode * less = new ListNode(-1);
        ListNode * high = new ListNode(-1);
        ListNode * lessHead = less;
        ListNode * highHead = high;
        
        while(head){
            if(head->val<x){
                less->next = head;
                less = less->next;
            }else{
                high->next = head;
                high = high->next;
            }
            head = head->next;
        }
        
        high->next = NULL;
        less->next = highHead->next;
        
        return lessHead->next;
    }
};