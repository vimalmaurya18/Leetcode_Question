class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans1;
        vector<int>ans2;
        vector<int>ans;
        int n=nums.size();
        int i=0;
        while(i<nums.size())
        {
            if(nums[i]>0)
            {
                ans1.push_back(nums[i]);
            }
            else if(nums[i]<0)
            {
                ans2.push_back(nums[i]);
            }
            i++;
        }
        int j=0;
        int k=0;
        while(ans.size()!=n)
        {
            if(ans.empty() || ans.back()<0)
            {
                ans.push_back(ans1[j]);
                j++;
            }
            else if(ans.back()>0)
            {
                ans.push_back(ans2[k]);
                k++;
            }
        }
        return ans;
    }
};