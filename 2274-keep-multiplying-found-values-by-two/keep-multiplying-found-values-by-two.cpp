class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {

        //sorting is one way to solve but this takes too much time compelxity
        //sort(nums.begin(),nums.end());

        unordered_map<int,bool>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]=true;
        }
        int a=original;
        for(int i=0;i<nums.size();i++)
        {
            if(m[a]==true)
            {
                a=2*a;
            }
        }
        return a;
    }
};