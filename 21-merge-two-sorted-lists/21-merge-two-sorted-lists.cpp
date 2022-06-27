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
        ListNode *cut=new ListNode();
        ListNode *temp=cut;
        while(list1!=NULL && list2!=NULL){
            if(list1->val<list2->val){
                ListNode *n=new ListNode(list1->val);
                cut->next=n;
                list1=list1->next;
                cut=cut->next;
            }
            else{
                ListNode *n=new ListNode(list2->val);
                cut->next=n;
                list2=list2->next;
                cut=cut->next;
            }
        }
        while(list1){
             ListNode *n=new ListNode(list1->val);
                cut->next=n;
                list1=list1->next;
                cut=cut->next;
        }
        while(list2){
            ListNode *n=new ListNode(list2->val);
                cut->next=n;
                list2=list2->next;
                cut=cut->next;
        }
        return temp->next;
    }
};