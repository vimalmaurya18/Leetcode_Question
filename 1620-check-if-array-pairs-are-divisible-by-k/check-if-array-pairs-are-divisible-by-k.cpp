class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        map<int,int>visited;
        int i=0,cnt=0;
        vector<int>brr(arr.size(),0);
        for(int i=0;i<arr.size();i++)
        {
            brr[i]=arr[i];
        }
        while(i<arr.size())
        {
            brr[i]=((brr[i]%k)+k)%k;
            visited[brr[i]]++;
            i++;
        }
        int j=0;
        while(j<arr.size())
        {
            if(brr[j]==0)
            {
                if(visited[0]>=2)
                {
                    visited[brr[j]]-=2;
                    cnt++;
                }
            }
            else if (k%2 == 0 && brr[j] == k / 2) 
            { 
                if(visited[brr[j]] >= 2) 
                 {
                     visited[brr[j]] -= 2;
                      cnt++;
                  }
             }
            else if(visited[brr[j]]>0)
            {
                if(visited[k-brr[j]]>0)
                {
                    cnt++;
                    visited[brr[j]]--;
                    visited[k-brr[j]]--;
                }
            }
                j++;
        }
         if(cnt==arr.size()/2)
         {
            return true;
         }
         return false;
    }
};