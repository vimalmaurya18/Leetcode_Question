class Solution {
public:
    bool checkString(string s) {
        int x=1;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='b')
            {
               x=0;
            }
            else if(s[i]=='a' && x==0)
            {
                return false;
            }
        }
        return true;
    }
};