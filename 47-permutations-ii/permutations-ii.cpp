class Solution {
public:
    vector<vector<int>> permutation(vector<int>& nums,vector<vector<int>>& ans,int i)
    {
        if(i==nums.size())
        {
            ans.push_back(nums);
            return ans;
        }

        int j=i;
       while(j < nums.size())
        { 
            bool duplicate = false; 
            for(int k = i; k < j; k++) 
            { 
                if(nums[k] == nums[j]) 
                { 
                    duplicate = true;
                    break; 
                }
            } 
            
            if(!duplicate)
             {
                 swap(nums[i], nums[j]);
                 permutation(nums, ans, i + 1);
                 swap(nums[i], nums[j]);
             } 
             j++;
        }
        return ans;
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int i=0;
        return permutation(nums,ans,i);
    }
};