/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode swapNodes(ListNode head, int k) {
        int n = 1;
        ListNode curr = head;
        while(curr!=null){
            n++;
            curr = curr.next;
        }
        curr = head;
        ListNode start = new ListNode();
        ListNode end = new ListNode();
        int i = 1;
        while(curr!=null){
            if(i == k){
                start = curr;
            }
            if(k == n-i){
                end = curr;
            }
            curr = curr.next;
            i++;
        }
        int temp = start.val;
        start.val = end.val;
        end.val = temp;
        return head;
    }
}