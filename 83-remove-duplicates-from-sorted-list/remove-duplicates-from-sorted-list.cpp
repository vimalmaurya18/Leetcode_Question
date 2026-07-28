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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
        {
            return NULL;
        }
        else if(head->next==NULL)
        {
            return head;
        }
        ListNode* pre=head;
        ListNode* curr=head->next;
        while(curr!=NULL)
        {
            if(pre->val==curr->val)
            {
                pre->next=curr->next;
                curr=pre->next;
            }
            else
            {
            pre=pre->next;
            curr=curr->next;
            }
        }
        return head;
    }
};