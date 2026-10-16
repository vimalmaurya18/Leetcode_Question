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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)
        {
            return head;
        }
        ListNode* temp=head;
        int n=1;
        while(temp->next!=NULL)
        {
            n++;
            temp=temp->next;
        }
        temp->next=head;
        ListNode* pre;
        k=k%n;
        int i=0;
        while(i<(n-k))
        {
            pre=head;
           head=head->next;
           i++;
        }
         pre->next=NULL;
         return head;
    }
};