class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>ans;
        if(arr.size()==0)
        {
            return ans;
        }
        else if(arr.size()==1)
        {
            ans.push_back(1);
            return ans;
        }
        vector<int>clone(arr);
        sort(clone.begin(),clone.end());
        unordered_map<int,int>m;
        int i=0,a=1;
        for(i=0;i<arr.size()-1;i++)
        {
            if(clone[i]==clone[i+1])
            {
                int j=i,k=clone[i];
                while(j<arr.size()-1 && clone[j]==k)
                {
                    m[clone[j]]=a;
                    j++;
                }
                j--,a++;
                i=j;
            }
            else
            {
                m[clone[i]]=a;
                a++;
            }
        }
        if(i>=1 && clone[i]==clone[i-1])
        {
            a--;
            m[clone[i]]=a;
        }
        else
        {
            m[clone[i]]=a;
        }
        for(int i=0;i<arr.size();i++)
        {
            ans.push_back(m[arr[i]]);
        }
        return ans;
    }
};