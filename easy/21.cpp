/*
21. Merge Two Sorted Lists
10/13/2023
Time: 14m 21s
Note: Calling recursively would be better
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy_head = new ListNode();
        ListNode* tail = dummy_head, *node1 = list1, *node2 = list2;
        while (node1 || node2) {
            if (!node1 && node2) {
                tail->next = node2;
                break;
            } else if (node1 && !node2) {
                tail->next = node1;
                break;
            }
            if (node1->val < node2->val) {
                tail->next = node1;
                node1 = node1->next;
            } else {
                tail->next = node2;
                node2 = node2->next;
            }
            tail = tail->next;
        }
        return dummy_head->next;
    }
};