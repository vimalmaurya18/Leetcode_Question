class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int r,c=0,i=num.size()-1,sum=0;
        vector<int>ans;
        while(i>=0 && k>0)
        {
            r=k%10;
            sum=c+num[i]+r;
            c=sum/10;
            ans.push_back(sum%10);
            i--;
            k=k/10;
        }
        while(i>=0)
        {
           sum=c+num[i];
           c=sum/10;
           ans.push_back(sum%10);
           i--;
        }
        while(k>0)
        {
            r=k%10;
            sum=c+r;
            c=sum/10;
            ans.push_back(sum%10);
            k=k/10;
        }
        if(c!=0)
        {
            ans.push_back(c);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};