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
    ListNode* reverseList(ListNode* head) {
        if (head == NULL)
            return head;
        ListNode* curr = head;
        ListNode* prev = NULL;
        while (head->next != NULL) {
            head = head->next;
            curr->next = prev;
            prev = curr;
            curr = head;
        }
        head->next = prev;
        return head;
    }
    ListNode* removeNodes(ListNode* head) {
        if (head->next == NULL)
            return NULL;
        if (head->next->next == NULL)
        {
            if (head->next->val > head->val)
                return head->next;
            else
                return head;
        }
         
        ListNode* firstReverse = reverseList(head);
        ListNode* dummy = firstReverse;
        while (firstReverse->next != NULL)
        {
            ListNode* nextNode = firstReverse->next->next;
            if (firstReverse->next->val < firstReverse->val)
            {
                ListNode* mid = firstReverse->next;
                firstReverse->next = nextNode;
                delete(mid);
            }
            else
            {
                firstReverse = firstReverse->next;
            }
        }
        
        //cout<<"return last with val"<<firstReverse->val<<endl;
        return reverseList(dummy);
    }
};