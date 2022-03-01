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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* put=new ListNode(-1);
        ListNode* temp = put;
        while(list1 && list2){
            if((list1->val)<(list2->val)){
                put->next=list1;
                put=put->next;
                list1=list1->next;
            }
            else{
                put->next=list2;
                put=put->next;
                list2=list2->next;
            }
           
        }
        while(list1){
            put->next=list1;
             put=put->next;
                list1=list1->next;
        }
        while(list2){
              put->next=list2;
                put=put->next;
                list2=list2->next;
        }
        return temp->next;
        
    }
};