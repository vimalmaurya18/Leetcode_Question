class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1,mid=((e-s)/2)+s;
        while(s<=e)
        {
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]<target)
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
            mid=((e-s)/2)+s;
        }
        return mid;
    }
};