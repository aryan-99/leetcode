/*
2. Add Two Numbers
10/13/2023
Time: 35m 34s
*/

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* head = new ListNode();
        ListNode* node = head;
        while (l1 || l2 || carry) {
            int d1 = (l1 ? l1->val : 0);
            int d2 = (l2 ? l2->val : 0);
            int local_sum = d1 + d2 + carry;

            int output_digit = local_sum % 10;
            carry = local_sum / 10;
            
            node->val = output_digit;

            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;
            if (l1 || l2 || carry) {
                node->next = new ListNode();
                node = node->next;
            }
        }
        return head;
    }
};