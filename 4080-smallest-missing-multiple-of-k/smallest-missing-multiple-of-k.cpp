class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());

        int ans=k;
        int i=0;
        while(i<nums.size())
        {
            if(ans!=nums[i] && nums[i]%k==0)
            {
                return ans;
            }
            else if( nums[i]%k!=0 || ((i+1)<nums.size() && nums[i]==nums[i+1]))
            {
                i++;
            }
            else
            {
            i++;
            ans=ans+k;
            }
        }
        return ans;
    }
};