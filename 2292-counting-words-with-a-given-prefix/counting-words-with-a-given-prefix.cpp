class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt=0;
        for(int i=0;i<words.size();i++)
        {
            int l=0;
            if(pref.length()>words[i].length())
            {
                continue;
            }
            for(int j=0;j<pref.length();j++)
            {
                if(pref[j]!=words[i][j])
                {
                    l=1;
                    break;
                }
            }
            if(l==0)
            {
                cnt++;
            }
        }
        return cnt;
    }
};