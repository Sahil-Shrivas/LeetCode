class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* node = NULL;

        while(head != NULL){
            ListNode* temp = head->next;
            head->next = node;
            node = head;
            head = temp;
        }
        return node;
    }
};