class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int>s1(26,0);
        vector<int>t1(26,0);
        int i=0;
        while(i<s.length())
        {
            s1[s[i]-'a']++;
            i++;
        }
        i=0;
        while(i<t.length())
        {
            t1[t[i]-'a']++;
            i++;
        }
        i=0;
        int a;
        while(i<26)
        {
            if(s1[i]==t1[i])
            {
                i++;
            }
            else
            {
                a=i;
                break;
            }
        }
        return 'a'+i;
    }
};