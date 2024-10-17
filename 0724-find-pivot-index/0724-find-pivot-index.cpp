class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int n = nums.size();

        nums.push_back(0);
        nums.insert(nums.begin(), 0);

        for(int i = 1 ; i <= n ; i++)
        {
            nums[i] += nums[i-1];
        }

        for(int i = 1; i <= n ; i++)
        {
            if(nums[ n ] - nums[i] == nums[i-1] )
                return i-1;
        }
        return -1;
    }
};