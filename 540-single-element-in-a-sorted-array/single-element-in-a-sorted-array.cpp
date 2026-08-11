class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int s=0,e=nums.size()-1,mid=s+((e-s)/2);
        while(s<e)
        {
            mid=s+((e-s)/2);
            if(mid%2==1)
            {
                mid=mid-1;
            }
            if(nums[mid]==nums[mid+1])
            {
                s=mid+2;
            }
            else
            {
                e=mid;
            }
        }
        return nums[s];
    }
};