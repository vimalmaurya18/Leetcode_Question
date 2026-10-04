class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>Ans;
        for(int i=0;i<nums.size();i++)
        {
             if(i>0 && nums[i]==nums[i-1])
             {
                continue;
             }
            int x=-1*(nums[i]);
            int j=i+1,k=nums.size()-1;
            while(j<k)
            {
                vector<int>ans;
                if(nums[j]+nums[k]==x)
                {
                    ans.push_back(nums[i]);
                    ans.push_back(nums[j]);
                    ans.push_back(nums[k]);
                    Ans.push_back(ans);
                    j++;
                    k--;
                 while(j<k && nums[j]==nums[j-1])
                 {
                    j++;
                 }
                 while(j<k && nums[k]==nums[k+1])
                 {
                    k--;
                 }
                }
                else if(nums[j]+nums[k]<x)
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }
        return Ans;
    }
};