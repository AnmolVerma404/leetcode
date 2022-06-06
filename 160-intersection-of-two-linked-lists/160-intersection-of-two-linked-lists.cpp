/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int sizeA = 0, sizeB = 0;
        ListNode *currA = headA, *currB = headB;
        while(currA!=NULL){
            sizeA++;
            currA = currA->next;
        }
        while(currB!=NULL){
            sizeB++;
            currB = currB->next;
        }
        currA = headA;
        currB = headB;
        for(int i = 0;i<abs(sizeA-sizeB);i++){
            if(sizeA<sizeB){
                currB = currB->next;
            }else{
                currA = currA->next;
            }
        }
        while(currA!=currB){
            currA = currA->next;
            currB = currB->next;
        }
        return currA;
    }
};