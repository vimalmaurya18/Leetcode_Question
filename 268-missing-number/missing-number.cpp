class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int i=0;
        while(i<nums.size())
        {
           sum=sum+nums[i];
           i++;
        }
       int n=nums.size();
       int p=(n*(n+1))/2;
       int t=p-sum;
       return t;
    }
};