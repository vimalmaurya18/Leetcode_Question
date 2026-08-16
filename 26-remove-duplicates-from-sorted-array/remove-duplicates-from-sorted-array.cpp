class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=0,k=1;
        while(j<nums.size()-1)
        {
            if(nums[j]!=nums[j+1])
            {
                nums[i+1]=nums[j+1];
                i++;
                k++;
            }
            j++;
        }
        return k;
    }
};