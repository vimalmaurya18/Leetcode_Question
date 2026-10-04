class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
       sort(nums.begin(),nums.end());
        vector<vector<int>>Ans;
        for(int i=0;i<nums.size();i++)
        {
            if(i>0 && nums[i]==nums[i-1])
             {
                continue;
             }
            
            for(int p=i+1;p<nums.size();p++)
            {
                if(p>i+1 && nums[p]==nums[p-1])
                {
                continue;
                }
            
            int j=p+1,k=nums.size()-1;
            while(j<k)
            {
                vector<int>ans;
                long long t= 1LL *nums[j]+nums[k]+nums[p]+nums[i];
                if(t==target)
                {
                    ans.push_back(nums[i]);
                    ans.push_back(nums[j]);
                    ans.push_back(nums[k]);
                    ans.push_back(nums[p]);
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
                else if(t<target)
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }
          }
        }
        return Ans;
    }
};