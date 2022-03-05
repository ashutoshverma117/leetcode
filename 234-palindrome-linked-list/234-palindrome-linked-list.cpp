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
    bool isPalindrome(ListNode* head) {
        stack<int>s;
        ListNode* cut=head;
        while(head!=NULL){
            s.push(head->val);
            head=head->next;
        }
        while(!s.empty()){
            int temp=s.top();
            if(temp!=cut->val)
                return false;
            cut=cut->next;
            s.pop();
        }
        return true;
    }
};