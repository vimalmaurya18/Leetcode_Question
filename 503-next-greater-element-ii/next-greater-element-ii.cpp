class Solution {
public:
    // int maxi(vector<int>& nums,int i)
    // {
    //     int ans=-1;
    //     int j=(i+1)%nums.size();
    //     while(j!=i)
    //     {
    //         if(nums[j]>nums[i])
    //         {
    //             ans=nums[j];
    //             break;
    //         }
    //         j=(j+1)%nums.size();
    //     }
    //     return ans;
    // }
    vector<int> nextGreaterElements(vector<int>& nums) {
        //vector<int>ans(nums.size(),0);
        // if(nums.size()==1)
        // {
        //     ans[0]=-1;
        //     return ans;
        // }
        // for(int i=0;i<nums.size();i++)
        // {
        //     ans[i]=maxi(nums,i);
        // }
        int n=nums.size();
        stack<int>s;
        vector<int>ans(nums.size(),-1);
        int i=(2*nums.size())-1;
        for(int i=(2*n)-1;i>=0;i--)
        {
            while(!s.empty() && s.top()<=nums[i%n])
            {
                s.pop();
            }
            if(!s.empty())
            {
                ans[i%n]=s.top();
            }
            s.push(nums[i%n]);
        }
        return ans;
    }
};