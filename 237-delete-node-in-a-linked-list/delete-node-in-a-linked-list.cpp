/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
    ListNode* temp=node;
    ListNode* pre=NULL;
    while(temp->next!=NULL)
    {
        temp->val=temp->next->val;
        pre=temp;
        temp=temp->next;
    }
    pre->next=NULL;
    }
};