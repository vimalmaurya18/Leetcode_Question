class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
       for(int i=0;i<nums.size();i++)
       {
        int p=abs(nums[i])-1;
        if(nums[p]<0)
        {
            ans.push_back(abs(nums[i]));
        }
        else
        {
            nums[p]=-nums[p];
        }
       }
      return ans;
    }
};