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
    ListNode* merge(ListNode* left,ListNode* slow)
    {
        if(left==NULL)
        {
            return slow;
        }
        if(slow==NULL)
        {
            return left;
        }
        ListNode* ans=new ListNode(-1);
        ListNode* temp=ans;
        while(left!=NULL && slow!=NULL)
        {
            if(left->val > slow->val)
            {
                ListNode* temp1=new ListNode(slow->val);
                temp->next=temp1;
                temp=temp->next;
                slow=slow->next;
            }
            else
            {
                ListNode* temp1=new ListNode(left->val);
                temp->next=temp1;
                temp=temp->next;
                left=left->next;
            }
        }
        while(left!=NULL)
        {
              ListNode* temp1=new ListNode(left->val);
                temp->next=temp1;
                temp=temp->next;
                left=left->next;
        }
        while(slow!=NULL)
        {
            ListNode* temp1=new ListNode(slow->val);
                temp->next=temp1;
                temp=temp->next;
                slow=slow->next;
        }
        return ans->next;
    }
    ListNode* mergesort(ListNode* head)
    {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        
        ListNode* pre;
        ListNode* left=head;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL)
        {
            pre=slow;
            slow=slow->next;
            fast=fast->next;
            if(fast->next!=NULL)
            {
                fast=fast->next;
            }
        }
        pre->next=NULL;
        // sorting left part
        left=mergesort(left);
        //sorting right part
        slow=mergesort(slow);
        //mergeing both side
        ListNode* result=merge(left,slow);
        return result;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL)
        {
           return NULL;
        }

        //Through the bubble sorting

        // ListNode* temp1=head;
        // while(temp1->next!=NULL)
        // {
        //     ListNode* temp2=temp1->next;
        //     while(temp2!=NULL)
        //     {
        //         if(temp1->val > temp2->val)
        //         {
        //             int x=temp1->val;
        //             temp1->val=temp2->val;
        //             temp2->val=x;
        //         }
        //             temp2=temp2->next;
        //     }
        //      temp1=temp1->next;
        // }
        ListNode* result=mergesort(head);

        return result;
    }
};