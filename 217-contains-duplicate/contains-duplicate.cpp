class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int i=0;
        map<int,bool>m;
        while(i<nums.size())
        {
            if(m[nums[i]]==true)
            {
                return true;
            }
            else
            {
                m[nums[i]]=true;
            }
            i++;
        }
        return false;
    }
};