class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>count;
        queue<char>q;
        int ans=-1;
        for(int i=0;i<s.length();i++)
        {
            char ch=s[i];
            count[ch]++;

            q.push(ch);
            while(!q.empty())
            {
                if(count[q.front()]>1)
                {
                    q.pop();
                }
                else
                {
                    break;
                }
            }
        }
        for(int i=0;i<s.length();i++)
        {
            if( !q.empty() && s[i]==q.front())
            {
                ans=i;
                break;
            }
        }
        return ans;
    }
};