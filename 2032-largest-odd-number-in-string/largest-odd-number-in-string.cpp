class Solution {
public:
    string largestOddNumber(string num) {
        int i=num.length()-1;
        while(num.length()!=0 && num[i]%2==0)
        {
            num.pop_back();
            i--;
        }
        return num;
    }
};