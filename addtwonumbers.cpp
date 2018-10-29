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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        long long int curr, temp, carry = 0;

        curr = l1->val + l2->val + carry;
        temp = curr%10;
        carry = curr/10;

        l1 = l1->next;
        l2 = l2->next;

        ListNode* result = new ListNode(temp), *head;
        head = result;

        while ((l1 != NULL) && (l2 != NULL)) {
            curr = l1->val + l2->val + carry;
            temp = curr%10;
            carry = curr/10;

            l1 = l1->next;
            l2 = l2->next;

            head->next = new ListNode(temp);
            cout << temp << endl;
            head = head->next;
        }

        if (l2){
            l1 = l2;
        }
        while (l1) {
            curr = l1->val + carry;
            temp = curr%10;
            carry = curr/10;
            l1 = l1 -> next;

            head->next = new ListNode(temp);
            cout << temp << endl;
            head = head->next;
        }

        if(carry){
            head->next = new ListNode(carry);
            cout << carry << endl;
        }

        return result;
    }
};
