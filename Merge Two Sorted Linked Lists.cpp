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
        if (!list1)
            return list2;
        if (!list2)
            return list1;
        ListNode* head1 = list1;
        ListNode* head2 = list2;
        ListNode* prev = nullptr;
        while (list1 && list2)
        {
            if (list1->val <= list2->val)
            {
                prev = list1;
                list1 = list1->next;
            }
            else 
            {
                ListNode* temp = list2;
                list2 = list2->next;
                temp->next = nullptr;
                if (prev == nullptr)
                {
                    temp->next = list1;
                    head1 = temp;
                }
                else
                {
                    prev->next = temp;
                    temp->next = list1;
                }
                prev = temp;
            }
        }
        while (list1)
        {
            prev->next = list1;
            prev = list1;
            list1 = list1->next;
        }
        while (list2)
        {
            prev->next = list2;
            prev = list2;
            list2 = list2->next;
        }
        
        return head1;
    }
};
