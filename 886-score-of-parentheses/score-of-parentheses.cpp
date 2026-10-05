class Solution {
public:
    int scoreOfParentheses(string s) {
        int cnt=0;
        int sum=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                cnt++;
            }
            else
            {
                if(s[i-1]=='(')
                {
                    sum=sum+(1<<(cnt-1));
                }
                cnt--;
            }
        }
        return sum;
    }
};