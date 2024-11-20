class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        long long res = 0;
        map<int , int>mp;
        mp[0] = true;
        for(long long i = 1 ; i < nums.size() ; i++)
        {
            nums[i] += nums[i-1];
        }

        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(mp[nums[i] - k ] > 0 )
            {
                res+=mp[nums[i] - k ] ;
            }   
            mp[nums[i]]++;
        }

        return res;
    }
};