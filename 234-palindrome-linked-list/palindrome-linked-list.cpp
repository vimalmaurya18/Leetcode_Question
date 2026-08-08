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
        //firstly original list ki copy banani hogi
        ListNode* temp=head;
        ListNode* copyhead=NULL;
        ListNode* copytail=NULL;
        while(temp!=NULL)
        {
            ListNode* newnode=new ListNode(temp->val); 
            if(copyhead==NULL)
            {
                copyhead=newnode;
                copytail=newnode;
            }
            else
            {
                copytail->next=newnode;
                copytail=newnode;
            }
            temp=temp->next;
        }
        //ab ek naya linked list bana hai jo ki puraani ka copy hai
        ListNode* pre=NULL;
        ListNode* curr=head;
        ListNode* forward;
        while(curr!=NULL)
        {
            forward=curr->next;
            curr->next=pre;
            pre=curr;
            curr=forward;
        }
     ListNode* temp2=pre;
     while(copyhead!=NULL && temp2!=NULL)
     {
        if(copyhead->val!=temp2->val)
        {
            return false;
        }
        copyhead=copyhead->next;
        temp2=temp2->next;
     }
     return true;
    }
};