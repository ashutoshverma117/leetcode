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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum=0;
        int rem=0;
        ListNode* temp=new ListNode(-1);
        ListNode* put=temp;
        while(l1!=NULL && l2!=NULL){
            ListNode* cut=new ListNode(-1);
            sum=l1->val+l2->val+rem;
                rem=sum/10;
                sum=sum%10;
                cut->val=sum;
                temp->next=cut;
                temp=temp->next;
            l1=l1->next;
            l2=l2->next;
        }
         while(l2){
            if(rem==0){
            temp->next=l2;
            l2=l2->next;
            temp=temp->next;
            }
            else{
                sum=l2->val+rem;
                rem=sum/10;
                sum=sum%10;
                temp->next=new ListNode(sum);
                // temp->next=l2;
                l2=l2->next;
                temp=temp->next;
                
            }
         }
             while(l1){
            if(rem==0){
            temp->next=l1;
            l1=l1->next;
            temp=temp->next;
            }
            else{
                sum=l1->val+rem;
                rem=sum/10;
                sum=sum%10;
                temp->next=new ListNode(sum);
                // temp->next=l1;
                l1=l1->next;
                temp=temp->next;
                
            }
        }
             if(rem!=0){
                 ListNode* v=new ListNode(1);
                 temp->next=v;
             }
        return put->next;
        
    }
};