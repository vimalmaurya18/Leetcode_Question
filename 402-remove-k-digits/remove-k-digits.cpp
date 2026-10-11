class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st;
        int i=0;
        while(i<num.length())
        {
            while(!st.empty() && k>0 && st.top()>num[i])
            {
                st.pop();
                k--;
            }
            st.push(num[i]);
            i++;
        }
        while(k>0 && !st.empty())
        {
            st.pop();
            k--;
        }
  string str;
  while(!st.empty())
  {
    str.push_back(st.top());
    st.pop();
  }

  reverse(str.begin(),str.end());

  i=0;
  while(i<str.size() && str[i]=='0')
  {
    i++;
  }
  str = str.substr(i); 
  if(str.empty()) 
  {
     return "0"; 
  }
   return str;
    }
};