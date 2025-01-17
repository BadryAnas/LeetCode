bool comp(string s1 , string s2)
{
    return s1+s2 > s2+s1;
}

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        
        vector<string> v(nums.size());

        for(int i =0;i < nums.size(); i++)
        {
            v[i] = to_string(nums[i]);
        }

        sort(v.begin(), v.end() , comp); 

        string ans ="";

        for(auto s : v)
        {
            ans += s;
        }

        if(ans[0] == '0')
            return "0"; 
        return ans;

    }
};