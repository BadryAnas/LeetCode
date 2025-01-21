class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>st;
        vector<vector<int>>ans; 
        sort(nums.begin(), nums.end());

        for(int i = 0 ; i < nums.size() ; i++)
        {
            if( i != 0 && nums[i] == nums[i-1]  )
                continue;
            for(int j = i + 1 , k = nums.size() - 1 ; j < k  ;)
            {
                vector<int>res;
                if(nums[k] + nums[j] == nums[i] * -1)
                {
                    res.push_back(nums[j]);
                    res.push_back(nums[i]);
                    res.push_back(nums[k]);
                    st.insert(res);
                    j++;
                }
                else if(nums[k] + nums[j] < nums[i] * -1)
                    j++;
                else
                    k--;
            }
        }
        for(auto x : st)
        {
            ans.push_back(x);
        }
        return ans;
    }
};