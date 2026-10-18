class Solution {
public:
    string longestPrefix(string s) {
        //This is the brute force apporach in which we slove it step by step

        // vector<string>pre;
        //  string p;
        // for(int i=0;i<s.length()-1;i++)
        // {
        //     p.push_back(s[i]);
        //     pre.push_back(p);
        // }
        // vector<string>suff;
        // string sf;
        // for(int i=s.length()-1;i>0;i--)
        // {
        //     sf.push_back(s[i]);
        //     suff.push_back(sf);
        // }
        // for(int i=0;i<suff.size();i++)
        // {
        //     reverse(suff[i].begin(),suff[i].end());
        // }
        // int i=0;
        // string ans;
        // while(i<pre.size())
        // {
        //     if(pre[i]==suff[i])
        //     {
        //        if(ans.length()>pre[i].length())
        //        {
        //            ans=ans;
        //        }
        //        else
        //        {
        //         ans=pre[i];
        //        }
        //     }
        //     i++;
        // }
        // return ans;


        //The optimised apporach is by the use if the KMP algorithm

        vector<int>lps(s.length(),0);
        int pre=0;
        int suf=1;
        while(suf<s.length())
        {
            if(s[pre]==s[suf])
            {
                lps[suf]=pre+1;
                pre++,suf++;
            }
            else
            {
                if(pre==0)
                {
                    suf++;
                }
                while(pre>0)
                {
                    pre=lps[pre-1];
                    if(s[pre]==s[suf])
                    {
                        lps[suf]=pre+1;
                        pre++,suf++;
                        break;
                    }
                }
            }
        }
        int n=lps[suf-1];
        string ans;
        int i=0;
        while(i<n)
        {
            ans.push_back(s[i]);
            i++;
        }
        return ans;
    }
};