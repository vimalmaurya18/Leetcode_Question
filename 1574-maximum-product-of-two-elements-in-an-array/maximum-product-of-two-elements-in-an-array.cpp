class Solution {
public:
    int maxProduct(vector<int>& nums) {

    // Approach 1st: We can solve it by sorting the vector but this increases the     time comlexity 

        // sort(nums.begin(),nums.end());
        // int n=nums.size();
        // return (nums[n-1]-1)*(nums[n-2]-1);

        //Apporach 2nd: We can find the first largest element and second largest element 

        int max=INT_MIN,secmax=INT_MIN,index=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>max)
            {
                max=nums[i];
                index=i;
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(i!=index && nums[i]>secmax && nums[i]<=max)
            {
                secmax=nums[i];
            }
        }
        return (max-1)*(secmax-1);
    }
};