class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,bool>count;
        int i=0,j=0;
        int ans=0,cnt=0;
        while(j<s.length())
        {
            if(count[s[j]]!=true)
            {
                count[s[j]]=true;
                j++;
                ans=max(ans,j-i);
            }
            else
            {
                count[s[i]]=false;
                i++;
            }
        }
        return ans;
    }
};