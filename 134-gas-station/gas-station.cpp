class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=1;
        int l=gas.size();
        int i=0;
        int totalGas=0,totalCost=0;
        for(int j=0;j<gas.size();j++)
        {
          totalGas+=gas[j];
          totalCost+=cost[j];
        }

       if(totalGas<totalCost)
       {
           return -1;
       }

        while(i<gas.size())
        {
            if((gas[i]-cost[i])>=0)
            {
                break;
            }
            i++;
        }
        if(i>=gas.size())
        {
            return -1;
        }
        int k=0,s=i;
        while(n!=gas.size())
        {
            int d=gas[i]-cost[i];
            if((k+d)>=0)
            {
                i=(i+1+l)%l;
                n++;
                k=d+k;
            }
            else
            {
               i=(i+1+l)%l;
               s=i;
               n=1;
               k=0;
            }
        }
        return s;
    }
};