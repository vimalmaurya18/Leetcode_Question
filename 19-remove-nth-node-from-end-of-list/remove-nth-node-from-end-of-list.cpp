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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL)
        {
            return NULL;
        }
        else if(head->next==NULL)
        {
            return NULL;
        }
        else if(head->next->next==NULL && n==1)
        {
            head->next=NULL;
            return head;
        }
        else if(head->next->next==NULL && n==2)
        {
            ListNode* temp=head;
            head=head->next;
            temp->next=NULL;
            delete temp;
            return head;
        }
        int k=0;
        ListNode* curr=head;
        while(curr!=NULL)
        {
            k++;
            curr=curr->next;
        }
        if(k==n)
        {
            ListNode* temp=head;
            head=head->next;
            temp->next=NULL;
            delete temp;
            return head;
        }
        int t=1;
        curr=head;
        ListNode* pre=NULL;
     while(t!=(k-n+1))
     {
        pre=curr;
        curr=curr->next;
        t++;
     }
     //now the curr has reached to the element which we have to delete
     if(curr!=NULL)
     pre->next=curr->next;
     curr->next=NULL;
     delete curr;
     return head;
    }
};