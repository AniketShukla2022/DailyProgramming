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
    ListNode* swapPairs(ListNode* nd) {
        if(!nd || !nd->next) // If there's no node return
            return nd;

        // Take the first node, second, and third node (could be nullptr)
        ListNode *prev = nd, *curr = nd->next, *nxt = nd->next->next;

        curr->next = prev; // Current node -> Prev node

        prev->next = swapPairs(nxt); // Prev node -> next swap
        return curr; // Curr node is now the new front of the list
    }
};