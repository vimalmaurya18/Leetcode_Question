class Solution {
public:
int find(int x,vector<int>& nums2)
{
    int p=-1;
    int j=0;
    while(j<nums2.size())
    {
       if(x==nums2[j])
       {
        break;
       }
       j++;
    }
    while(j<nums2.size())
    {
        if(x<nums2[j])
        {
            p=nums2[j];
            break;
        }
        j++;
    }
    if(p==x)
    {
        return -1;
    }
    return p;
}
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int i=0,k=-1;
        vector<int>ans;
        while(i<nums1.size())
        {
           k= find(nums1[i],nums2);
           ans.push_back(k);
            i++;
        }
     return ans;
    }
};