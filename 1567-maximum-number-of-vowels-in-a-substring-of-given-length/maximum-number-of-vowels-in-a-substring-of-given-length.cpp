class Solution {
public:
    int maxVowels(string s, int k) {
        int i=0;
        int cnt=0;
        while(i<k)
        {
           if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' )
           {
            cnt++;
           }
           i++;
        }
        int ans=cnt,j=0;
        while(i<s.length())
        {
             if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')
             {
                  cnt--;
             }
             if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
             {
                  cnt++;
             }
             ans=max(ans,cnt);
             j++;
             i++;
        }
        return ans;
    }
};