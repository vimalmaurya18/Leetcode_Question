class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt0=0;
        int cnt1=0;
        int cnt2=0;
        int s=0;
        while(s<nums.size())
        {
            if(nums[s]==0)
            {
                cnt0++;
                s++;
            }
            else if(nums[s]==1)
            {
                cnt1++;
                s++;
            }
            else
            {
                cnt2++;
                s++;
            }
        }
         s=0;
        while(s<nums.size())
        {
            if(cnt0!=0)
            {
                nums[s]=0;
                s++;
                cnt0--;
            }
           else if(cnt1!=0)
            {
                nums[s]=1;
                s++;
                cnt1--;
            }
            else if(cnt2!=0)
            {
                nums[s]=2;
                s++;
                cnt2--;
            }
        }
        return;
    }
};