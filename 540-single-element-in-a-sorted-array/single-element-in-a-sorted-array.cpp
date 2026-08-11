class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int s=0,e=nums.size()-1,mid=s+((e-s)/2);
        if(nums.size()==1)
        {
           return nums[0];
        }
        if(nums[0]!=nums[1])
        {
            return nums[0];
        }
        if(nums[nums.size()-1]!=nums[nums.size()-2])
        {
            return nums[nums.size()-1];
        }
        while(s<e)
        {
            if(mid >0 && mid<nums.size()-1 && nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1])
            {
                return nums[mid];
            }
            if(mid >0 && nums[mid]==nums[mid-1])
            {
                if((mid-s+1)%2==0)
                {
                    s=mid+1;
                }
                else
                {
                    e=mid-2;
                }
            }
            else if(mid<nums.size()-1 && nums[mid]==nums[mid+1])
            {
                if((e-mid+1)%2==0)
                {
                    e=mid-1;
                }
                else
                {
                    s=mid+2;
                }
            }
            mid=s+((e-s)/2);
        }
        return nums[s];
    }
};