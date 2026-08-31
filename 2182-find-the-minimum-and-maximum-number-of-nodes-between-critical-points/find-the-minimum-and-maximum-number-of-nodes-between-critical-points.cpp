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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>ans;
        vector<int>p;
        int i=2;
        if(head==NULL)
        {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        else if(head->next==NULL)
        {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
       else if(head->next->next==NULL)
        {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
    ListNode* curr=head->next;
     ListNode* temp=curr->next;
      ListNode* pre=head;
    while(temp!=NULL)
    {
        if(((curr->val < temp->val ) && (curr->val < pre->val)) || ((curr->val > temp->val ) && (curr->val > pre->val)))
        {
            p.push_back(i);
        }
        curr=curr->next;
        temp=temp->next;
        pre=pre->next;
        i++;
    }
     if(p.size()<2)
        {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        int small=INT_MAX;
    for(int j=0;j<p.size()-1;j++)
    {
        small=min(small,p[j+1]-p[j]);
    }
    ans.push_back(small);
    ans.push_back(p[p.size()-1]-p[0]);
    return ans;
    }
};