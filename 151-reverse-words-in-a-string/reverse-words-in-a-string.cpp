class Solution {
public:
    string reverseWords(string s) {
        string ans;
        int i=s.length()-1,l=-1,p=0;
        while(i>=0)
        {
            if(s[i]==' ' && l==0)
            {
               i--;
            }
            else if(s[i]==' ' && p==0)
            {
                i--;
            }
            else if(s[i]==' ' && p!=0)
            {
                int j=i+1;
                while(s[j]!=' ' && j!=s.length())
                {
                    ans.push_back(s[j]);
                    j++;
                }
                ans.push_back(' ');
                l=0;
            }
           else
           {
            i--;
            p++;
            l=-1;
           }
        }
        i=0;
        if(s[0]!=' ')
        {
         while(s[i]!=' ' && i!=s.length())
         {
            ans.push_back(s[i]);
            i++;
         } 
        }
        i=ans.length()-1;
        while(ans[i]==' ')
        {
            ans.pop_back();
            i--;
        }
        return ans;
    }
};