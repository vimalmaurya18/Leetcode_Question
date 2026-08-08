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
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* temp1=head;
        while(fast!=NULL)
        {
            fast=fast->next;
            if(fast!=NULL)
            {
                fast=fast->next;
            }
            slow=slow->next;
        }
        //ab slow pointer jo hai wo middle node par pahuch chuka hai
        ListNode* pre=NULL;
        ListNode* curr=slow;
        ListNode* forward;
        while(curr!=NULL)
        {
            forward=curr->next;
            curr->next=pre;
            pre=curr;
            curr=forward;
        }
        //now the half part of the linked list has been reversed and now we have to compare 
        while(pre!=NULL)
        {
            if(temp1->val!=pre->val)
            {
                return false;
            }
            pre=pre->next;
            temp1=temp1->next;
        }
       return true;
    }
};