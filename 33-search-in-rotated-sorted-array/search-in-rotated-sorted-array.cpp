class Solution {
public:
    int search(vector<int>& nums, int target) {
        //fristly we have to find the pivat element
        int s=0,e=nums.size()-1,mid=((e-s)/2)+s;
        int p;
        while(s<e)
        {
           if(nums[mid]>=nums[0])
            {
              s=mid+1; 
            }
            else
            {
                e=mid;
            }
            mid=((e-s)/2)+s;
        }
        p=s;
        if(target>=nums[p] && target<=nums[nums.size()-1])
        {
           s=p;
           e=nums.size()-1;
        }
        else
        {
            e=p-1;
            s=0;
        }
        mid=((e-s)/2)+s;
       while(s<=e)
       {
        if(nums[mid]==target)
        {
            return mid;
        }
        else if(nums[mid]<target)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=((e-s)/2)+s;
       }
        return -1;
    }
};