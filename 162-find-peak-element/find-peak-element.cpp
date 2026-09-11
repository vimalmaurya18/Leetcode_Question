class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int s=0,e=nums.size()-1,mid;
        while(s<e)
        {
             mid=((e-s)/2)+s;
            if(nums[mid]>nums[mid+1])
            {
                e=mid;
            }
            else
            {
                s=mid+1;
            }
        }
        return s;
    }
};