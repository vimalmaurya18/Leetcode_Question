class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0;
        int s=0;
        int large=0;
        if(nums.size()==1 && nums[0]==1)
        {
            return 1;
        }
        while(s<nums.size())
        {
            if(nums[s]==1)
            {
                cnt++;
                large=max(large,cnt);
            }
            else if(nums[s]!=1)
            {
                cnt=0;
            }
            s++;
        }
        return large;
    }
};