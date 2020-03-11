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
    ListNode* oddEvenList(ListNode* head) {
        if (head==NULL || head->next==NULL || head->next->next==NULL) return head;
        ListNode* tmpOdd = new ListNode(-1);
        ListNode* tmpEven = new ListNode(-1);
        tmpOdd->next = head;
        tmpEven->next = head->next;
        ListNode* oddCur = head;
        ListNode* evenCur = head->next;
        
        while (evenCur!=NULL && evenCur->next!=NULL) {
            oddCur->next = evenCur->next;
             evenCur->next = evenCur->next->next;
             oddCur = oddCur->next;
             evenCur = evenCur->next;
         }
         oddCur->next = tmpEven->next;
         return tmpOdd->next;
    }
};