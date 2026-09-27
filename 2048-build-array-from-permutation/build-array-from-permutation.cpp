class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int i=0,j=0;
        vector<int>ans(nums.size(),0);
        while(i<nums.size())
        {
            ans[j]=nums[nums[i]];
            j++;
            i++;
        }
        return ans;
    }
};