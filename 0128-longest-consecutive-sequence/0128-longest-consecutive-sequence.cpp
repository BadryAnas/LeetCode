class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.empty())
            return 0;
        set<int>st;
        vector<int>v;
        int counter = 1 , mx = 0;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            st.insert(nums[i]);
        }
        for(auto x : st)
        {
            v.push_back(x);
        }
        for(int i = 1 ; i < v.size() ; i++)
        {
            if(v[i] == v[i-1]+1)
            {
                counter++;
            }
            else
            {
                mx = max(mx , counter);
                counter = 1;
            }
        }
        mx = max(mx , counter);
        return mx;
    }
};