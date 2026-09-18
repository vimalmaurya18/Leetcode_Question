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
    void reorderList(ListNode* head) {
        int n=0;//size of the linkedlist
        ListNode* temp=head;
        while(temp!=NULL)
        {
            temp=temp->next;
            n++;
        }
        //Now we have the size of the linkedlist
        //Now we have to make the clone linked list
        temp=head->next;
        ListNode* headclone=new ListNode(head->val);
        ListNode* tempc=headclone;
        while(temp!=NULL)
        {
            ListNode* newnode=new ListNode(temp->val);
            tempc->next=newnode;
            tempc=newnode;
            temp=temp->next;
        }
        //And now we will reverse the clone linked list
        temp=headclone;
        ListNode* pre=NULL;
        ListNode* forward;
        while(temp!=NULL)
        {
            forward=temp->next;
            temp->next=pre;
            pre=temp;
            temp=forward;
        }
        ListNode* clone=pre;
        ListNode* f1;
        ListNode* f2;
        temp=head;
        int cnt=0;
        if(n%2!=0)
        {
            while(cnt<(n/2))
            {
                if(temp!=NULL)
                f1=temp->next;
                if(clone!=NULL)
                f2=clone->next;
                if(temp!=NULL)
                temp->next=clone;
                if(clone!=NULL)
                clone->next=f1;
                temp=f1;
                clone=f2;
                cnt++;
                if(cnt==(n/2))
                {
                    if(temp!=NULL)
                    temp->next=NULL;
                }
            }
        }
        else
        {
             while(cnt<((n/2)-1))
            {
                f1=temp->next;
                f2=clone->next;
                temp->next=clone;
                clone->next=f1;
                temp=f1;
                clone=f2;
                cnt++;
                if(cnt==((n/2)-1))
                {
                    if(temp!= NULL)
                    temp->next=clone;
                    clone->next=NULL;
                }
            }
        }
    }
};