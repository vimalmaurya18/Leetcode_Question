class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int i=0,p=0,sum=0;
        //Making of the frist window
        while(i<k)
        {
            sum=sum+arr[i];
            i++;
        }
        double ans=(double)sum/k;
        if(ans>=threshold)
        {
            p++;
        }
        while(i<arr.size())
        {
            sum=sum-arr[i-k]+arr[i];
            ans=(double)sum/k;
             if(ans>=threshold)
             {   
                 p++;
             }
             i++;
        }
        return p;
    }
};