class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=0;
        while(n!=s.length())
        {
            int k=s[0];
            for(int i=0;i<s.length()-1;i++)
            {
               s[i]=s[i+1];
            }
            s[s.length()-1]=k;
            if(s==goal)
            {
                return true;
            }
            n++;
        }
        return false;
    }
};