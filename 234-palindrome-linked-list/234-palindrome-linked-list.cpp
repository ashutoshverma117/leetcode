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
        ListNode * put=head;
        while(put){
            s.push(put->val);
            put=put->next;
        }
        while(!s.empty()){
            int cut=s.top();
            if(cut!=head->val){
                return false;
            }
            head=head->next;
            s.pop();
        }
        return true;
    }
};