class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
        {
            return false;
        }
        vector<int>s1(26,0);
        vector<int>t1(26,0);
        int i=0;
        while(i<s.length())
        {
            s1[s[i]-'a']++;
            t1[t[i]-'a']++;
            i++;
        }
        i=0;
        while(i<26)
        {
            if(s1[i]!=t1[i])
            {
                return false;
            }
            i++;
        }
        return true;
    }
};