/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* len=head;
        ListNode* put=head;
        int count=0;
        while(len!=NULL){
            count++;
            len=len->next;
        }
        if(count==n){
            return head->next;
        }
        int find=count-n;
        int i=0;
        while(i<find-1){
            head=head->next;
            i++;
        }
        head->next=head->next->next;
        return put;
        
        
    }
};