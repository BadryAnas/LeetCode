class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        map<int, bool>mp;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            mp[nums[i]] = true;
        }

        for(int i = 1 ; i <= nums.size() ; i++)
        {
            if(!mp[i])
            {
                result.push_back(i);
            }
            
        }
        return result;
    }
};