class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* here= head;
        ListNode* turt = head;
        while(here  && here->next){
            turt= turt->next;
            here = here->next->next;
            if(turt == here){
                return 1;
            }
        }
            return 0;
    }
};
