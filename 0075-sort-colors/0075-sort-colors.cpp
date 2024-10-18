class Solution {
public:
    void sortColors(vector<int>& nums) {
        int freq[3] = {0};
        int z = 0;
        for(int i = 0 ; i < nums.size() ;i++ )
        {
            freq[nums[i]]++;
        }
        for(int i = 0 ;i < 3 ; i++)
        {
            for(int j = 0 ; j < freq[i]  ; j++, z++)
            {
                nums[z] = i;
            }
        }
    }
};