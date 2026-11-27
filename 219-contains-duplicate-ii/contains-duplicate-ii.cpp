class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(nums[i])!=m.end()) // ye line check karti hai ki nums[i] map mein present hi ki nahi agar present nahi hogi to m.end() return karta hai aur agar present hai to m.find() return nahi karta hai
            {
                if(abs(i-m[nums[i]])<=k)
                {
                    return true;
                }
            }
            m[nums[i]]=i;
        }
        
        return false;
    }
};