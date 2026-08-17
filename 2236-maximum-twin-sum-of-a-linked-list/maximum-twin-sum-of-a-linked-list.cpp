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
    int pairSum(ListNode* head) {
        //we can do this by reversing the linked list half and the we can run the front and back pointer simultaneously
        //frist finding middle node
        int k=INT_MIN;
        ListNode* prev;
        ListNode* front=head;
        ListNode* fast=head;
        ListNode* slow=head;
        if(head->next->next==NULL)
        {
            int p=head->val+head->next->val;
            return p;
        }
        while(fast!=NULL)
        {
            fast=fast->next;
            if(fast!=NULL)
            {
                fast=fast->next;
            }
            prev=slow;
            slow=slow->next;
        }
         prev->next=NULL;
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
     ListNode*back=pre;
     while(back!=NULL)
     {
      k=max(k,front->val + back->val);
     front=front->next;
     back=back->next;
     }
     return k;
    }
};