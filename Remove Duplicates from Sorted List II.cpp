class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)return head;

        ListNode* dummy = new ListNode();
        dummy->next = head;
        ListNode* temp = dummy;
        while(temp->next && temp->next->next){
            if(temp->next->val == temp->next->next->val){
                int variable = temp->next->val;
                while(temp->next!=NULL && temp->next->val==variable){
                    temp ->next = temp->next->next;
                }
            }
            else{
                temp = temp->next;
            }
        }
    return dummy->next;
    }
};