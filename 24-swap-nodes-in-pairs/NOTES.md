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
```
​
## **3**
```
class Solution {
public:
ListNode* swapPairs(ListNode* head) {
if(!head || !head->next) return head;
ListNode * temp = head->next;
head->next = swapPairs(head->next->next);
temp->next = head;
return temp;
}
};
```