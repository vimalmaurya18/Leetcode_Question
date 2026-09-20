class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int>ans;
        int cnt1=0,cnt2=0,i=0,j=0;
        while(j<nums2.size() && i<nums1.size())
        {
            if(nums1[i]==nums2[j])
            {
                cnt1++;
                i++;
            }
            else if(nums1[i]<nums2[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        i=0;
        j=0;
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums2[j]==nums1[i])
            {
                cnt2++;
                j++;
            }
            else if(nums2[j]<nums1[i])
            {
                j++;
            }
            else
            {
                i++;
            }
        }
        ans.push_back(cnt1);
        ans.push_back(cnt2);
        return ans;
    }
};