class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>preffixsum;
        int i=0,sum=0;
        while(i<nums.size())
        {
            sum=sum+nums[i];
            preffixsum.push_back(sum);
            i++;
        }
        i--;
        sum=0;
        vector<int>suffixsum;
        while(i>=0)
        {
            sum=sum+nums[i];
            suffixsum.push_back(sum);
            i--;
        }
        reverse(suffixsum.begin(),suffixsum.end());
    i=0;
    while(i<nums.size())
    {
        if(preffixsum[i]==suffixsum[i])
        {
            return i;
        }
        i++;
    }
    return -1;
    }
};