class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int count = 0;

        while (temp!=NULL)
        {
            count++;
            temp = temp->next;
        }
        if (count == 1)
            return NULL;
        if (n==count)
            {
                head = head->next;
                return head;
            }
        int target = count-n+1;
        ListNode* prev=head;
        temp = head;
        while(target>1)
        {
            prev = temp;
            temp = temp->next;
            target--;
        }
        if(temp != NULL && temp->next!=NULL)
            prev->next = temp->next;
        else
            prev->next = NULL;
        delete temp;

        return head;

    }
};