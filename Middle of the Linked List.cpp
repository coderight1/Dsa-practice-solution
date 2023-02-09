class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* here = head;
        ListNode* tortoise = head;
        while(here && here->next){
            here = here->next->next;
            tortoise = tortoise->next;
        }
        return tortoise;
    }
};