class Solution {
public:
    int reverseDegree(string s) {
        int i=0,sum=0;
        while(i<s.length())
        {
            sum=sum+(i+1)*('z'-s[i]+1);
            i++;
        }
        return sum;
    }
};