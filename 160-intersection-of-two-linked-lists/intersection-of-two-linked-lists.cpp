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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        map<ListNode*,bool>visited;
        ListNode* curr1=headA;
        ListNode* curr2=headB;
        while(curr1!=NULL)
        {
            visited[curr1]=true;
            curr1=curr1->next;
        }
        while(curr2!=NULL)
        {
            if(visited[curr2]==true)
            {
                return curr2;
            }
            visited[curr2]=true;
            curr2=curr2->next;
        }
        return NULL;
    }
};