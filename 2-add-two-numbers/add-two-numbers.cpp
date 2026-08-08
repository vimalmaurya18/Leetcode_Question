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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1= l1;
        ListNode* temp2=l2;
        ListNode* curr=new ListNode(-1);
        ListNode* tail=curr;
        int c=0,sum=0;
        int r;
        while(temp1!=NULL && temp2!=NULL)
        {
            sum=temp1->val+temp2->val+c;
            c=sum/10;
            r=sum%10;
            ListNode* newnode=new ListNode(r);
            tail->next=newnode;
            tail=newnode;
            temp1=temp1->next;
            temp2=temp2->next;
        } 
        while(temp1!=NULL)
        {
            sum=temp1->val+c;
            c=sum/10;
            r=sum%10;
            ListNode* newnode=new ListNode(r);
            tail->next=newnode;
            tail=newnode;
            temp1=temp1->next;
        }
        while(temp2!=NULL)
        {
            sum=temp2->val+c;
            c=sum/10;
            r=sum%10;
            ListNode* newnode=new ListNode(r);
            tail->next=newnode;
            tail=newnode;
            temp2=temp2->next;
        }
        if(c!=0)
        {
             ListNode* newnode=new ListNode(c);
            tail->next=newnode;
            tail=newnode;
        }
        return curr->next;
    }
};