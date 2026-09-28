class Solution {
public:
    int maxDepth(string s) {
        int ans=0,cnt=0,i=0;
        while(i<s.length())
        {
            if(s[i]=='(')
            {
                cnt++;
                ans=max(ans,cnt);
                i++;
            }
            else if(s[i]==')')
            {
                cnt--;
                i++;
            }
            else
            i++;
        }
        return ans;
    }
};