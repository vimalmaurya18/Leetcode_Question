class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
         if(n==0)
        {
            return true;
        }
        if(flowerbed.size()==1)
        {
            if(flowerbed[0]==0 && n==1)
            return true;
            else return false;
        }
        int j=0;
        if(flowerbed[j]==0 && flowerbed[j+1]==0)
        {
            flowerbed[j]=1;
            n--;
            j++;
        }
        else
        {
            j++;
        }
        if(n==0)
        {
            return true;
        }
        while(j<flowerbed.size()-1)
        {
            if(flowerbed[j]==0 && flowerbed[j-1]==0 && flowerbed[j+1]==0)
            {
                flowerbed[j]=1;
                n--;
            }
            if(n==0)
            {
                return true;
            }
            j++;
        }
        if(flowerbed[j-1]==0 && flowerbed[j]==0)
        {
            n--;
        }
        if(n==0)
        {
            return true;
        }
        return false;
    }
};