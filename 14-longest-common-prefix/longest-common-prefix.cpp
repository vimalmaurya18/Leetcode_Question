class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        if(strs.size()==0)
        {
            return ans;
        }
        int p=0,len=INT_MAX;
        while(p<strs.size())
        {
            len=min(len,(int)strs[p].size());
            p++;
        }
        int i=0,j=0,k=0;
        while(j<len && strs[0][j]!='\0')
        {
            int a;
            char n=strs[0][j];
            i=0;
            while(i<strs.size())
            {
                a=0;
                if(strs[i][j]==n)
                {
                    i++;
                }
                else
                {
                    a=1;
                    break;
                }
            }
            if(a==0)
            {
                 ans.push_back(n);
            }
            else
            {
                break;
            }
            k++;
            j++;
        }
        return ans;
    }
};