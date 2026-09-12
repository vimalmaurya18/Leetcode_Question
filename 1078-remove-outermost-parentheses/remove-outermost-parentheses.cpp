class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        stack<int>st;
        int i=0;
        while(i<s.length())
        {
            if(st.empty())
            {
                st.push(s[i]);
                i++;
            }
            else if(s[i]==')' && st.top()=='(')
            {
                st.pop();
                if(!st.empty())
                ans.push_back(s[i]);
                i++;
            }
            else
            {
                st.push(s[i]);
                ans.push_back(s[i]);
                i++;
            }
        }
        return ans;
    }
};