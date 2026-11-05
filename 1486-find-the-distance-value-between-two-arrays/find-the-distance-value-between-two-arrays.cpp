class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        int count=0;

        //Brute force apporach

        int i=0,j=0;
        while(i<arr1.size())
        {
            if(j<arr2.size() && abs(arr1[i]-arr2[j])<=d)
            {
                i++;
                j=0;
            }
            else if(j<arr2.size() && abs(arr1[i]-arr2[j])>d)
            {
                j++;
            }
            else
            {
                count++;
                i++;
                j=0;
            }
        }
        return count;

        //Optimised apporach using binary search

        // int i=0;
        // while(i<arr1.size())
        // {
        //     int s=0,e=arr2.size()-1,mid=((e-s)/2)+s;
        //     while(s<=e)
        //     {
        //         mid=((e-s)/2)+s;
        //         if(abs(arr1[i]-arr2[mid])<=d)
        //         {
        //             i++;
        //             break;
        //         }
        //         else if(abs(arr1[i]-arr2[mid])>d)
        //         {
        //             e=mid-1;
        //         }
        //     }
        //     if(e<0)
        //     {
        //         count++;
        //         i++;
        //     }
        // }
        // return count;
    }
};