class Solution {

public:

    long long countCommas(long long n) {

        long long k=0;
        long long t=n;

        while(t!=0)
        {
            t=t/10;
            k++;
        }

        if(k<4)
        {
            return 0;
        }

        long long p=1000;
        long long cnt=0;
        long long i=3;
        long long z=1;

        while(p<=n)
        {
            long long next=pow(10,i+3);

            if(next<=n)
            {
                cnt=cnt+(next-p)*z;
                p=next;
                z++;
                i=i+3;
            }
            else
            {
                cnt=cnt+(n-p+1)*z;
                break;
            }
        }

        return cnt;
    }
};