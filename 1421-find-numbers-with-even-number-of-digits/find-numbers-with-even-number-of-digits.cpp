class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int i=0,cnt=0,p=0;
        while(i<nums.size())
        {
           int n=nums[i];
            cnt=0;
            while(n>0)
            {
                n=n/10;
                cnt++;
            }
            if(cnt%2==0)
            {
                p++;
            }
            i++;
        }
        return p;
    }
};