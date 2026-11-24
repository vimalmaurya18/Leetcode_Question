class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string ans;
        for(int i=0;i<words.size();i++)
        {
            int j=0,k=words[i].size()-1,l=0;
            while(j<k)
            {
                if(words[i][j]==words[i][k])
                {
                    j++,k--;
                }
                else
                {
                    l=1;
                    break;
                }
            }
            if(l==0)
            {
                ans=words[i];
                break;
            }
        }
        return ans;
    }
};