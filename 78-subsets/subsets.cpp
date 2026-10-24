class Solution {
public:
    vector<vector<int>> power(vector<int>& nums,vector<int>result,vector<vector<int>>& ans,int i)
    {
        if(i>=nums.size())
        {
            ans.push_back(result);
            return ans;
        }

        // i index wale element ko include karna hai ki nahi ye decide karna hoga

        // To include the element of the index of i
        result.push_back(nums[i]);
        ans=power(nums,result,ans,i+1);
        //to exclude the element of the index of i
        result.pop_back(); //exclude karne ke liye hame pop karna padega 
        ans=power(nums,result,ans,i+1);
        return ans;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>result;//subset wala vetor hai
        int i=0;
        return power(nums,result,ans,i);
    }
};