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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        ListNode* curr = new ListNode(-1);
        ListNode* copy = curr;
        while (l1!=NULL&&l2!=NULL) {
            if(l1->val > l2->val) {
                curr->next = l2;
                l2 = l2->next;
            } else {
                curr->next = l1;
                l1=l1->next;
            }
            curr = curr->next;
        }
        if(l1==NULL) curr->next=l2;
        if(l2==NULL) curr->next=l1; 
        
        return copy->next;
    }
};