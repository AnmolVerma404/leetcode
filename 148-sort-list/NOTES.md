Selection Sort O(n^2)
```
class Solution {
public:
ListNode* sortList(ListNode* head) {
if(!head) return head;
ListNode * i = head, * t = new ListNode(INT_MAX);
for(;i->next!=NULL;i = i->next){
ListNode * j = i->next;
t = i;
for(;j!=NULL;j = j->next){
if(j->val<t->val){
t = j;
}
}
int temp = t->val;
t->val = i->val;
i->val = temp;
}
return head;
}
};
```