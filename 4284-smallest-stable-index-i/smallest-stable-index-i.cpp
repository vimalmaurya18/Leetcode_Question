class Solution {
public:
    int Large(int i,vector<int>& nums)
    {
        int large=INT_MIN;
        for(int j=0;j<=i;j++)
        {
            large=max(large,nums[j]);
        }
        return large;
    }
     int Small(int i,vector<int>& nums)
    {
        int small=INT_MAX;
        for(int j=i;j<=nums.size()-1;j++)
        {
            small=min(small,nums[j]);
        }
        return small;
    }
    int firstStableIndex(vector<int>& nums, int k) {
        int i=0;
        while(i<nums.size())
        {
            int l=Large(i,nums);
            int s=Small(i,nums);
            if((l-s)<= k)
            {
                return i;
            }
            i++;
        }
        return -1;
    }
};