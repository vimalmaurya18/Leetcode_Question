class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int i=0;
        long long sum=0;
        vector<int>p(nums.size(),-1);
        if(2*k>=nums.size())
        {
            int j=0;
            while(j<nums.size())
            {
                nums[j]=-1;
                j++;
            }
            return nums;
        }
        while(i<=2*k)
        {
            sum=sum+nums[i];
            if(i<k)
            p[i]=-1;
            i++;
        }
        int ans=sum/(2*k+1);
        p[k]=ans;
        while(i<nums.size())
        {
            sum=sum-nums[i-(2*k+1)]+nums[i];
            ans=sum/(2*k+1);
            p[i-k]=ans;
            i++;
        // }
        // int j=nums.size()-1;
        // while(j>(nums.size()-k-1))
        // {
        //     nums[j]=-1;
        //     j--;
        }
        return p;
    }
};