class Solution {
public:
    bool search(vector<int>& nums, int target) {
        //we can not apply thr concept of the pivot element 
        int s=0,e=nums.size()-1;
        while(s<=e)
        {
            int mid=((e-s)/2)+s;
            if(nums[mid]==target)
            {
                return true;
            }
            if(nums[s]==nums[mid] && nums[mid]==nums[e])
            {
                s++;
                e--;
                continue;
            }
            if(nums[mid]<=nums[e])
            {
                if(nums[mid]<=target && target<=nums[e])
                s=mid+1;
                else
                e=mid-1;
            }
            else 
            {
                if(nums[mid]>=target && target>=nums[s])
                e=mid-1;
                else
                s=mid+1;
            }
        }
        return false;
    }
};