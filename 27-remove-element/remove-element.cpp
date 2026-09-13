class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ans=0,i=0;
        while(i<nums.size())
        {
            if(nums[i]!=val)
            {
                ans++;
            }
            i++;
        }
        i=0;
        int j=0;
        while(j<nums.size())
        {
            if(nums[j]!=val)
            {
                nums[i]=nums[j];
                i++;
            }
            j++;
        }
        return ans;
    }
};