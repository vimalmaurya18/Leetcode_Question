class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int>p;
        if(nums.size()==1)
        {
            return 1;
        }
        int ans=0,cnt=1,m=1;
        int i=0;
        sort(nums.begin(),nums.end());
        while(i<nums.size()-1)
        {
            if(nums[i]==nums[i+1])
            {
                cnt++;
                p.push_back(cnt);
                m=max(m,cnt);
            }
            else
            {
                cnt=1;
                p.push_back(cnt);
            }
            i++;
        }
        if(nums[i-1]!=nums[nums.size()-1])
        {
            p.push_back(1);
        }
        i=0;
        while(i<p.size())
        {
            if(p[i]==m)
            {
                ans=ans+p[i];
            }
            i++;
        }
        return ans;
    }
};