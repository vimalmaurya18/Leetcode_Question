class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>suff;
        // vector<int>ans;
        int i=arr.size()-1,p=INT_MIN;
        while(i>0)
        {
            if(arr[i]>p)
            {
                suff.push_back(arr[i]);
                p=arr[i];
            }
            else
            {
                suff.push_back(p);
            }
            i--;
        }
      reverse(suff.begin(),suff.end());
      suff.push_back(-1);
        // i=suff.size()-2;
        // while(i>=0)
        // {
        //     ans.push_back(suff[i]);
        //     i--;
        // }
        // ans.push_back(-1);
        // return ans;
        return suff;
    }
};