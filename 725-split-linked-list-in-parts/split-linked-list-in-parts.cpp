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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* temp=head;
        int n=0,l=0;
        vector<ListNode*>ans;
        while(temp!=NULL)
        {
            temp=temp->next;
            n++;
        }
        temp=head;
        if(n<k)
        { 
            l=0;
            while(temp!=NULL)
            {
               ListNode* curr=new ListNode(temp->val);
               ans.push_back(curr);
                temp=temp->next;
                l++;
            }
          while(l<k)
          {
            ListNode* curr=NULL;
            ans.push_back(curr);
            l++;
          }
          return ans;
        }
          temp=head;
            if(n%k==0)
            {
                int q=n/k;
              while(temp!=NULL)
              {
               ListNode* curr=temp;
               ListNode* currpre;
               int l=0;
               while(l<q)
               {
                currpre=curr;
                curr=curr->next;
                l++;
                if(l==q)
                {
                    currpre->next=NULL;
                    ans.push_back(temp);
                    temp=curr;
                }
               }
              }
              return ans;
            }
           else if(n%k!=0)
            {
                int r=n%k,l,t=0,q=n/k;
              while(temp!=NULL)
              {
               ListNode* curr=temp;
               ListNode* currpre;
               if(t==0)
               {
                for(int j=0;j<r;j++)
                {
                   l=0;
                   while(l<=q)
                   {
                    currpre=curr;
                    curr=curr->next;
                    l++;
                   }
                   currpre->next=NULL;
                   ans.push_back(temp);
                   temp=curr;
                   t++;
                }
               }
               else
               {
                while(temp!=NULL)
              {
               ListNode* curr=temp;
               ListNode* currpre;
               int l=0;
               while(l<q)
               {
                currpre=curr;
                curr=curr->next;
                l++;
                if(l==q)
                {
                    currpre->next=NULL;
                    ans.push_back(temp);
                    temp=curr;
                }
               }
              }
               }
              }
              return ans;
            }
        return ans;
    }
};