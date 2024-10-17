bool comp (pair<int,int> a, pair<int,int> b) {
    if(a.second == b.second) {
        return a.first > b.first;
    }
    return a.second > b.second;
}

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int , int >mp;
        vector<pair<int , int>> v;
        vector<int>res;
        for(int i =0 ; i < nums.size() ; i++)
        {
            mp[nums[i]]++;
        }
        
        for(auto &[i,j] : mp)
        {
            v.push_back({i, j});
        }
        sort(v.begin(), v.end() , comp);

        for(int i =0 ; i < k ; i++)
        {
           res.push_back(v[i].first);
        }
        return res;
    }
};