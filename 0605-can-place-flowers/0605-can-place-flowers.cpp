class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int counter = 0;
        if(flowerbed.size() == 1 && n <= 1 && flowerbed[0] == 0 || flowerbed.size() == 2 && n <= 1 && flowerbed[0] == 0 && flowerbed[1] == 0)
        {
            return true;
        }
        for(int i = 0 ;i < flowerbed.size() ; i++)
        {
            if(i != flowerbed.size() - 1 && i != 0 && flowerbed[i] == 0 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0 )
            {
                counter++;
                i++;
            }
            else if( i == 0 && flowerbed[i] == 0 && flowerbed[i+1] == 0 )
            {
                counter++;
                i++;
            }
            else if(i == flowerbed.size() - 1 && flowerbed[i] == 0 && flowerbed[i-1] == 0 )
            {
                counter++;
            }
        }
        
        return (counter >= n);
    }
};