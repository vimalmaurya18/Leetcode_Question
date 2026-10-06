class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int>st;
        int i=0;
        while(i<s.length())
        {
           if(st.empty())
           {
            st.push(s[i]);
           }
           else if(st.top()=='(' && s[i]==')')
           {
             st.pop();
           }
           else
           {
            st.push(s[i]);
           }
            i++;
        }
        int n=st.size();
        return n;
    }
};