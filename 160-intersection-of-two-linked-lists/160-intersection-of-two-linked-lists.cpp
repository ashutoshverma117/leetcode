/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* cut=headA;
        ListNode* put=headB;
        int count=0;
        int counti=0;
        while(cut){
            count++;
            cut=cut->next;
        }
        while(put){
            counti++;
            put=put->next;
        }
        int rat=count>counti?(count-counti):(counti-count);
        if(count<counti){
            int i=0;
            while(i<rat){
                headB=headB->next;
                i++;
            }
        }
        if(count>counti){
            int i=0;
            while(i<rat){
                headA=headA->next;
                i++;
            }
        }
        while(headA){
            if(headA==headB)
                return headA;
            headA=headA->next;
            headB=headB->next;
            
        }
        return NULL;
    }
};