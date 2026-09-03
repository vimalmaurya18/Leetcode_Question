class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        sort(nums1.begin(), nums1.end());

        int smallest = nums1[0];
        for(int i=1;i<nums1.size();i++)
        {
            if(nums1[i]%2 != smallest % 2)
            {
                nums1[i] = nums1[i]-smallest;
            }
        }
        for(int i=0;i<nums1.size();i++)
        {
            if(nums1[i] % 2!=smallest % 2)
                return false;
        }
        return true;
    }
};