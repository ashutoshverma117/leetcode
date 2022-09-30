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
        ListNode *cut=headA;
        ListNode *put=headB;
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
        if(count>counti){
            int k=count-counti;
            int i=0;
            while(i<k){
                headA=headA->next;
                i++;
            }
            while(headA && headB){
                if(headA==headB){
                    return headB;
                }
                headA=headA->next;
                headB=headB->next;
            }
        }
         if(counti>=count){
            int k=counti-count;
            int i=0;
            while(i<k){
                headB=headB->next;
                i++;
            }
            while(headA && headB){
                if(headA==headB){
                    return headB;
                }
                headA=headA->next;
                headB=headB->next;
            }
        }
        return NULL;
    }
};