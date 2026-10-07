class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int i=0;
        string str="";
        stack<char>st;
        while(i<s.length())
        {
            if(s[i]=='(')
            {
                st.push(s[i]);
            }
            else if(st.empty() && s[i]==')')
            {
                s[i]='*';
            }
            else if(s[i]==')')
            {
                if(st.top()!='(')
                {
                    s[i]='*';
                }
                else if(st.top()=='(')
                {
                    st.pop();
                }
            }
            i++;
        }
        if(!st.empty())
        {
            i--;
            while(!st.empty())
            {
                if(s[i]=='(')
                {
                    s[i]='*';
                    st.pop();
                }
                i--;
            }
        }
        i=0;
        while(i<s.length())
        {
            if(s[i]!='*')
            {
                str.push_back(s[i]);
            }
            i++;
        }
        return str;
    }
};