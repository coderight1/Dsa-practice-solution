class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* before_head = new ListNode();
        ListNode* after_head = new ListNode();
        ListNode* before = before_head;
        ListNode* after = after_head;
        while(head!=NULL){
            if(head->val<x){
                before->next = head;
                before = before->next;
            }
            else{
                after->next = head;
                after = after->next;
            }
            head = head->next;
            after->next = NULL;
            before->next = after_head->next;
        }
            return before_head ->next;
    }
};