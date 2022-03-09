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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return NULL;
        ListNode * curr = head;
        ListNode * prev;
        unordered_map<int,int>mp;
        while(curr!=NULL){
            mp[curr->val]++;
            curr = curr->next;
        }
        if(mp.size()==1){
            if(mp.begin()->second>1) return NULL;
        }
        bool isThere = false;
        for(auto i : mp){
            if(i.second==1) isThere = true;
        }
        if(!isThere) return NULL;
        // for(auto i : mp)cout<<i.first<<" "<<i.second<<"\n";
        curr = head;
        while(mp[curr->val]>1){
            // cout<<curr->val<<" ";
            curr = curr->next;
        }
        head = curr;
        while(curr->next!=NULL){
            if(mp[curr->next->val]>1){
                int temp = mp[curr->next->val];
                ListNode * pass = curr->next;
                while(temp--){
                    pass = pass->next;
                }
                // cout<<pass->val;
                curr->next = pass;
                continue;
            }else{
                curr = curr->next;
            }
        }
        return head;
    }
};
