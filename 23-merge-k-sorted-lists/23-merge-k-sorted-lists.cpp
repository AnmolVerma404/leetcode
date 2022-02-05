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
    ListNode * merge2List(ListNode* l1, ListNode* l2){
        if(!l1) return l2;
        if(!l2) return l1;
        ListNode * head = l1->val >= l2->val ? l2 : l1;
        head->next = l1->val >= l2->val ? merge2List(l1,l2->next) : merge2List(l1->next,l2);
        return head;
    }
public:
    ListNode* mergeKLists(vector<ListNode*>& v) {
        int n = v.size();
        if(n == 0) return NULL;
        ListNode * head = v[0];
        for(int i = 1; i< n ;i++){
            head = merge2List(head, v[i]);
        }
        return head;
    }
};