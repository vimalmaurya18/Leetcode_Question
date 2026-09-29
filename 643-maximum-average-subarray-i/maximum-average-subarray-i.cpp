class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        //Applying the sliding window apporach 
        int sum=0;
        int i=0;
        while(i<k)
        {
            sum=sum+nums[i];
            i++;
        }
        double ans=(double)sum/k;
        while(i<nums.size())
        {
           sum=sum-nums[i-k]+nums[i];
           double p=(double)sum/k;
           ans=max(ans,p);
           i++;
        }
        return ans;
    }
};