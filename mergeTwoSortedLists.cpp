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
        ListNode* result = new ListNode(INT_MIN), *head = result;
        while((l1 != NULL) && (l2 != NULL)) {
            if(l1->val < l2->val) {
                result->next = l1;
                l1 = l1->next;
            }
            else {
                result->next = l2;
                l2 = l2->next;
            }
            result = result->next;
        }
        if(l1 == NULL) {
            while(l2 != NULL){
                result->next = l2;
                l2 = l2->next;
                result = result->next;
            }
        }
        else {
            while(l1 != NULL){
                result->next = l1;
                l1 = l1->next;
                result = result->next;
            }
        }
        return head->next;
    }
};
