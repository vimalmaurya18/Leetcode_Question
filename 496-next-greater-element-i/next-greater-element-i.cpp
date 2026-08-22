class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>s;
        s.push(-1);
        vector<int>ans(nums2.size(),0);
        int i=nums2.size()-1;
        while(i>=0)
        {
           if(s.top()>nums2[i])
           {
            ans[i]=s.top();
            s.push(nums2[i]);
           }
           else
           {
            while(s.top()>=0 && s.top()<=nums2[i])
            {
                s.pop();
            }
            ans[i]=s.top();
            s.push(nums2[i]);
           }
           i--;
        }
        map<int,int>m;
        for(int i=0;i<ans.size();i++)
        {
           m[nums2[i]]=ans[i];
        }
        vector<int>answer(nums1.size(),0);
        for(int i=0;i<nums1.size();i++)
        {
           answer[i]=m[nums1[i]];
        }
        return answer;
    }
};