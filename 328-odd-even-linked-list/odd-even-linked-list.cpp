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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL)
        {
            return NULL;
        }
        if(head->next==NULL)
        {
            return head;
        }
        ListNode* t=head;
        ListNode* p=head->next;
        ListNode* k=p;
        while(t->next!=NULL && k->next!=NULL)
        {
            if(t->next!=NULL)
            {
            t->next=t->next->next;
            t=t->next;
            }
            if(k->next!=NULL)
            {
            k->next=k->next->next;
            k=k->next;
            }
        }
          t->next=p;
        return head;
    }
};