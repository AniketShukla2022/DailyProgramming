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
    ListNode* reverseList(ListNode* head)
    {
        if (head == NULL)
            return NULL;
        ListNode* prev = nullptr;
        ListNode* next = head;
        ListNode* curr = head;
        while (curr)
        {
           next = curr->next;
           curr->next = prev;
           prev = curr;
           curr = next;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        if (!head || !head->next) 
            return;

        // step1: Find the mid of LL
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        // step2: reverse the second half of LL
        ListNode* second = reverseList(slow->next);

        // step3: separate both the halves
        slow->next = nullptr;

        // step4: merge two halves according to the problem
        ListNode* first = head;
        while (second)
        {
            ListNode* next1 = first->next;
            ListNode* next2 = second->next;

            first->next = second;
            second->next = next1;

            first = next1;
            second = next2;
        }
        return;
    }
};
