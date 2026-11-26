class Solution {
public:
    bool canAliceWin(int n) {
        int i=10;
        int cnt=-1;
        while(i>0 && n>=i)
        {
            n=n-i;
            cnt++;
            i--;
        }
        if(cnt % 2 == 0)
        {
            return true;
        }
        else
        return false;
    }
};