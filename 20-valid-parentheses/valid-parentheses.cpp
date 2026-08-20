class Solution {
public:
    bool isValid(string s) {
        if(s.length()%2!=0)
        {
            return false;
        }
        stack<int>st;
        int i=0;
        while(i<s.length())
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            else
            {
                if( s[i]=='(' || s[i]=='[' || s[i]=='{')
                {
                    st.push(s[i]);
                }
                else if(st.top()=='(' && s[i]==')' || st.top()=='[' && s[i]==']' || st.top()=='{' && s[i]=='}' )
                {
                    st.pop();
                }
                else
                {
                    st.push(s[i]);
                }
            }
            i++;
        }
        if(st.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};