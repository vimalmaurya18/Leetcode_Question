class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int a=-1;
        int s=0,e=nums.size()-1,mid=((e-s)/2)+s;
        while(s<=e)
        {
            if(nums[mid]==target)
            {
                a=mid;
                e=mid-1;
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
        ans.push_back(a);
         s=0,e=nums.size()-1,mid=((e-s)/2)+s;
        while(s<=e)
        {
            if(nums[mid]==target)
            {
                a=mid;
                s=mid+1;
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
        ans.push_back(a);
        return ans;
    }
};