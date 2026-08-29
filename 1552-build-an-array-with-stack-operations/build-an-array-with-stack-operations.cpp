class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>ans;
        int cnt=0,pre=target[0];
        int j=0;
        stack<int>s;
        for(int i=1;i<=n;i++)
        {
           
            if(i==target[j] && i!=1)
            {
                while(!s.empty() &&  s.top()!=pre)
                {
                    s.pop();
                    ans.push_back("Pop");
                }
                 s.push(i);
                 pre=i;
                ans.push_back("Push");
                j++;
                cnt++;
            }
            else
            {
                s.push(i);
                ans.push_back("Push");
                cnt++;
            }
            if(cnt==target[target.size()-1])
            {
                break;
            }
            if(i==1 && target[0]==1)
            {
                j++;
            }
        }
        return ans;
    }
};