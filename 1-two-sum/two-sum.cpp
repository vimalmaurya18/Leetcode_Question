class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>v;
        for(int i=0;i<nums.size();i++)
        {
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        int i=0,j=v.size()-1;
        while(i<j)
        {
            int k=v[i].first+v[j].first;
            if(k==target)
            {
                return {v[i].second,v[j].second};
            }
            else if(k<target)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return {};
    }
};