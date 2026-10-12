//merge sort
class Solution {
public:
    void merge(vector<int>& nums,int s,int e)
    {
        int mid=((e-s)/2)+s;

        int l1=mid-s+1;
        int l2=e-mid;

        //making two seperate array to store left and right part
        int* first=new int[l1];
        int* second=new int[l2];
        
        //coping value in the frist and second array
        int mainindex=s;
        for(int i=0;i<l1;i++)
        {
            first[i]=nums[mainindex++];
        }
        for(int i=0;i<l2;i++)
        {
            second[i]=nums[mainindex++];
        }

        //merging two sorted array
        int index1=0;
        int index2=0;
        mainindex=s;
        while(index1 < l1 && index2 < l2)
        {
            if(first[index1]<second[index2])
            {
                nums[mainindex++]=first[index1++];
            }
            else
            {
                nums[mainindex++]=second[index2++];
            }
        }

        while(index1<l1)
        {
            nums[mainindex++]=first[index1++];
        }
        while(index2<l2)
        {
            nums[mainindex++]=second[index2++];
        }
        delete [] first;
        delete [] second;
        return;
    }
    void mergesort(vector<int>& nums,int s,int e)
    {
        //base case
        if(s>=e)
        {
            return;
        }
        int mid=((e-s)/2)+s;
        
        //sorting left part
        mergesort(nums,s,mid);
        
        //sorting right part
        mergesort(nums,mid+1,e);
        
        //merging both the array
        merge(nums,s,e);
        return;
    }
    vector<int> sortArray(vector<int>& nums) {
        int s=0;
        int e=nums.size()-1;
        mergesort(nums,s,e);
        return nums;
    }
};