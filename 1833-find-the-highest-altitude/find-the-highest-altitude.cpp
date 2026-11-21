class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>altitude;
        altitude.push_back(0);
        int sum=0;
        for(int i=0;i<gain.size();i++)
        {
            sum=sum+gain[i];
            altitude.push_back(sum);
        }
        int max=INT_MIN;
        for(int i=0;i<altitude.size();i++)
        {
            if(altitude[i]>max)
            {
                max=altitude[i];
            }
        }
        return max;
    }
};