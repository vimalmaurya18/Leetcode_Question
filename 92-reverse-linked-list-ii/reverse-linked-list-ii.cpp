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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right)
        {
            return head;
        }
        ListNode* temp=head;
        ListNode* pre=NULL;
        ListNode* curr=head;
        ListNode* prev=curr;
        int i=1;
        while(i<left)
        {
            temp=temp->next;
            prev=curr;
            curr=curr->next;
            i++;
        }   
        ListNode* forward=curr;
        while(i<=right)
        {
            forward=curr->next;
            curr->next=pre;
            pre=curr;
            curr=forward;
            i++;
        }
        if(left==1)
        {
            temp->next=curr;
            return pre;
        }
        temp->next=curr;
        prev->next=pre;
        return head;
    }
};