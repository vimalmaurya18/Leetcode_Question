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
// void remove(ListNode* &head)
// {
//             ListNode* p=head;
//             head=head->next;
//             p->next=NULL;
//             delete p;
//             return;
// }
    ListNode* removeElements(ListNode* head, int val) {
         if(head==NULL)
        {
            return NULL;
        }
        ListNode* temp=head;
        ListNode* pre=NULL;
        while(temp!=NULL)
        {
            if(temp->val==val && pre==NULL)
            {
                ListNode* p=temp;
                temp=temp->next;
                head=temp;
                p->next=NULL;
                delete p;
            }
            else if(temp->val==val)
            {
               ListNode* curr=temp;
               temp=temp->next;
               pre->next=temp;
               curr->next=NULL;
               delete curr;
            }
            else
            {
             pre=temp;
             temp=temp->next;
            }
        }
        return head;
    }
};