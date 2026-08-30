class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int large=INT_MIN;
        int l,s;
        int small=INT_MAX;
       for(int i=0;i<nums.size();i++)
       {
        if(nums[i]>large)
        {
            large=nums[i];
            l=i;
        }
         if(nums[i]<small)
        {
            small=nums[i];
            s=i;
        }
       }
     int k=max(l,s)+1;
     int e=max(nums.size()-s,nums.size()-l);
     int z=min(k,e);
     int j=l+1+nums.size()-s;
     int g=s+1+nums.size()-l;
     int t=min(j,g);
     int ans=min(z,t);
     return ans;
    }
};