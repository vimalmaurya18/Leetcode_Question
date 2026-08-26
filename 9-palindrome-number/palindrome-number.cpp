class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        int t=x,r;
        long long rev=0;
        while(t!=0)
        {
             r=t%10;
             rev=rev*10+r;
             t=t/10;
        }
        if(rev==x)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};