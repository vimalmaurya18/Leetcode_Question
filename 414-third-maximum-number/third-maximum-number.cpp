class Solution {
public:
    int thirdMax(vector<int>& nums) {
        if(nums.size()==1)
        {
            return nums[0];
        }
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        int cnt=0,a,i=0;
        while(i<nums.size()-1)
        {
            if(nums[i]!=nums[i+1])
            {
                a=nums[i+1];
                cnt++;
            }
            if(cnt==2)
            {
                return a;
            }
            i++;
        }
        return nums[0];
    }
};