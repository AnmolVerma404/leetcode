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
    void merge(int *Arr, int start, int mid, int end)
{
    int temp[end - start + 1];
    int i = start, j = mid + 1, k = 0;
    while (i <= mid && j <= end)
    {
        if (Arr[i] <= Arr[j])
        {
            temp[k] = Arr[i];
            k += 1;
            i += 1;
        }
        else
        {
            temp[k] = Arr[j];
            k += 1;
            j += 1;
        }
    }
    while (i <= mid)
    {
        temp[k] = Arr[i];
        k += 1;
        i += 1;
    }
    while (j <= end)
    {
        temp[k] = Arr[j];
        k += 1;
        j += 1;
    }
    for (i = start; i <= end; i += 1)
    {
        Arr[i] = temp[i - start];
    }
}

void mergeSort(int *Arr, int start, int end)
{

    if (start < end)
    {
        int mid = (start + end) / 2;
        mergeSort(Arr, start, mid);
        mergeSort(Arr, mid + 1, end);
        merge(Arr, start, mid, end);
    }
}
public:
    ListNode* sortList(ListNode* head) {
        if(!head) return head;
        ListNode*curr = head;
        int n = 0;
        while(curr!=NULL){
            n++;
            curr = curr->next;
        }
        curr = head;
        int arr[n];
        for(int i = 0;i<n;i++){
            arr[i] = curr->val;
            curr = curr->next;
        }
        mergeSort(arr, 0, n - 1);
        curr = head;
        for(int i = 0;i<n;i++){
            curr->val = arr[i];
            curr = curr->next;
        }
        return head;
    }
};