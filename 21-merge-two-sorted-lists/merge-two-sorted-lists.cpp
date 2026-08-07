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
void inserttail(ListNode* &temp,ListNode* &list)
{
    temp->next=list;
    list=list->next;
    return;
}
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL)
        {
            return list2;
        }
        if(list2==NULL)
        {
            return list1;
        }
        if(list1==NULL&&list2==NULL)
        {
            return NULL;
        }
        ListNode* curr1=list1;
        ListNode* curr2=list2;
        ListNode* p=new ListNode(-1);
        ListNode* temp=p;
        while(curr1!=NULL && curr2!=NULL)
        {
            if(curr1->val >= curr2->val)
            {
                inserttail(temp,curr2);
            }
            else if(curr1->val < curr2->val)
            {
                inserttail(temp,curr1);
            }
            temp=temp->next;
        }
        while(curr1!=NULL)
        {
            temp->next=curr1;
            temp=temp->next;
            curr1=curr1->next;
        }
         while(curr2!=NULL)
        {
            temp->next=curr2;
            temp=temp->next;
            curr2=curr2->next;
        }
        return p->next;
    }
};