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
    ListNode* swapNodes(ListNode* head, int k) {
    //     int cnt1=1;
    //     int cnt2=1;
    //     int n=0;//For the size of the linked list
    //     ListNode* temp=head;
    //     while(temp!=NULL)
    //     {
    //         temp=temp->next;
    //         n=n+1;
    //     }
    //    ListNode* temp1=head;
    //    ListNode* temp2=head;
    //    while(cnt2!=n-k+1)
    //    {
    //        temp2=temp2->next;
    //        cnt2++;
    //    }
    //    while(cnt1!=k)
    //    {
    //         temp1=temp1->next;
    //         cnt1++;
    //    }
    //    int x=temp1->val;
    //    temp1->val=temp2->val;
    //    temp2->val=x;

    //Without counting the size of the linkedlist
    ListNode* first=head;
    ListNode* second=head;
    for(int i=1;i<k;i++)
    {
        first=first->next;
    }
    ListNode* temp=first;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        second=second->next;
    }
    int x=first->val;
    first->val=second->val;
    second->val=x;
       return head;
    }
};