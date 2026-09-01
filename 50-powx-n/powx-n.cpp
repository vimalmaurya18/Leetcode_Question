class Solution {
public:
    double myPow(double x, int n) {
         double ans=1;
        if(n>=0)
        {
        while(n!=0)
        {
            if(n%2!=0)
            {
                ans=ans*x;
            }
            x=x*x;
            n=n/2;
        }
        return ans;
        }
        else
        {
            long long t=-(long long)n;
            while(t!=0)
          {
            if(t%2!=0)
            {
                ans=ans*x;
            }
            x=x*x;
            t=t/2;
          }
          ans=1/ans;
        return ans;
        }
    }
};