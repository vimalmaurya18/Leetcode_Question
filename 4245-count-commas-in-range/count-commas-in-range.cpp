class Solution {
public:
    int countCommas(int n) {
        int k=0,cnt=0;
        int p=n;
        while(p!=0)
        {
            p=p/10;
            k++;
        }
        if(k < 4)
        return 0;
        int t=1000;
        while(t<=n)
        {
           cnt++;
           t++;
        }
        return cnt;
    }
};