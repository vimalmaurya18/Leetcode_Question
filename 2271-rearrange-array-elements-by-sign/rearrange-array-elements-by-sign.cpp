class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans1;
        vector<int>ans2;
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
        int p=0;
        while(p<n)
        {
            if(p==0 || p%2==0)
            {
                nums[p]=ans1[j];
                j++;
            }
            else
            {
                nums[p]=ans2[k];
                k++;
            }
            p++;
        }
        return nums;
    }
};