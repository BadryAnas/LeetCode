class Solution {
public:
    int maxArea(vector<int>& height) {
        int mx = 0 , i = 0 , j = height.size() - 1;
        // O(N^2) 
        // TLE
        // for(int i = 0 ; i < height.size()  ; i++)
        // {
        //     for(int j = i +1 ; j < height.size()  ;j++)
        //     {
        //         mx = max(mx , (j-i) * (min(height[i] , height[j])));
        //     }
        // }
        // return mx;
        while(i < j)
        {
            mx = max(mx ,  (j-i) * (min(height[i] , height[j])));
            if(height[i] <= height[j])
            {
                i++;
            }
            else
                j--;
        }

        return mx;

    }
};