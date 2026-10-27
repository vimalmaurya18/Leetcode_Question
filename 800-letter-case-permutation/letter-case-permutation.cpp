class Solution {
public:
    char capitaltosmall(char ch)
    {
        ch=ch-'A'+'a';
        return ch;
    }
    char smalltocapital(char ch)
    {
        ch=ch-'a'+'A';
        return ch;
    }
    void find(string s,vector<string>& ans,int i)
    {
        if(i==s.size())
        {
            ans.push_back(s);
            return;
        }

        //firstly we need to find the english alphabet
        while( i<s.size() && s[i]>='0' && s[i]<='9')
        {
            i++;
        }
        if(i==s.size())
        {
            ans.push_back(s);
            return;
        }
        if(s[i]>='a' && s[i]<='z')
        {
             s[i]=smalltocapital(s[i]);
        }
        // if(s[i]>='A' && s[i]<='Z')
        else
        {
            s[i]=capitaltosmall(s[i]);
        }
        find(s,ans,i+1);
        
        if(s[i]>='a' && s[i]<='z')
        {
             s[i]=smalltocapital(s[i]);
        }
        // if(s[i]>='A' && s[i]<='Z')
        else
        {
             s[i]=capitaltosmall(s[i]);
        }

        find(s,ans,i+1);
        return;
    }
    vector<string> letterCasePermutation(string s) {
        vector<string>ans;
        int i=0;
        find(s,ans,i);
        return ans;
    }
};