class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL) return NULL;
        int length = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            length++;
            temp= temp->next;

        }

        length  = length -n;
        if(length==0){ // remove first element
            temp = head->next;
            head->next = NULL;
            delete(head);
            return temp;
        }

        // for length>0
        ListNode*prev;
        ListNode*after  =  head;
        while(length>0){
            prev = after;
            after = after->next;
            length--;
        }
        prev ->next = after->next;
        after ->next = NULL;
        delete(after);
        return head;
    }
};