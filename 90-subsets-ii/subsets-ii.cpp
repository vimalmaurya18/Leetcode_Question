class Solution {
public:
    vector<vector<int>> power(vector<int>& nums,vector<int>subset,vector<vector<int>>& ans,int i)
    {
        if(i>=nums.size())
        {
            ans.push_back(subset);
            return ans;
        }

        //on including an element
        subset.push_back(nums[i]);
        power(nums,subset,ans,i+1);
         
        //On excluding an element
       while (i < nums.size() - 1 && nums[i] == nums[i + 1])
        { 
            i++;
        }
        subset.pop_back();
        power(nums,subset,ans,i+1);
        return ans;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>subset;
         int i=0;
        ans=power(nums,subset,ans,i);
        return ans;
    }
};