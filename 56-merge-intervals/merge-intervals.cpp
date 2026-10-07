class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int i=0;
        vector<vector<int>>answer;
        sort(intervals.begin(),intervals.end());
        int k=intervals[0][1];
        int j=intervals[0][0];
        while(i<intervals.size())
        {
            if(i+1 <intervals.size() && k>=intervals[i+1][0])
            {
                k=max(k,intervals[i+1][1]);
                i++;
            }
            else
            {
                vector<int>ans;
                ans.push_back(j);
                ans.push_back(k);
                i++;
                answer.push_back(ans);
                if(i<intervals.size())
                {
                    j=intervals[i][0];
                    k=intervals[i][1];
                }
            }
        }
        return answer;
    }
};