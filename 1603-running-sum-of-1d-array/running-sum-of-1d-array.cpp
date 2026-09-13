class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>ans;
        int i=0,sum=0;
        while(i<nums.size())
        {
            sum=sum+nums[i];
            ans.push_back(sum);
            i++;
        }
        return ans;
    }
};