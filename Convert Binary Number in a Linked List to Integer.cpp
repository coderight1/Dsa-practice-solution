class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head;
        int num = temp->val;
        while(temp->next!=NULL){
          num= 2*num + temp->next->val; 
          temp = temp->next;
        }
        return num;
    }
};