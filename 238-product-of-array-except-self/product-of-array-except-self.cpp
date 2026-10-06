class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>pre;
        vector<int>suff;
        vector<int>answer;
        pre.push_back(1);
        int i=1;
        int ans1=1;
        //For preffix product
        while(i<nums.size())
        {
           ans1=ans1*nums[i-1];
           pre.push_back(ans1);
           i++;
        }
        int ans2=1;
        suff.push_back(1);
        i=nums.size()-2;
        while(i>=0)
        {
            ans2=ans2*nums[i+1];
            suff.push_back(ans2);
            i--; 
        }
        reverse(suff.begin(),suff.end());
         i=0;
         while(i<pre.size())
         {
            answer.push_back((pre[i]*suff[i]));
            i++;
         }
         return answer;
    }
};