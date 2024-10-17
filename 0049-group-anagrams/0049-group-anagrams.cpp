bool comp (pair<string,int> a, pair<string,int> b) {
    if(a.first == b.first) {
        return a.second < b.second;
    }
    return a.first < b.first;
}

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        int n = strs.size();
        vector<vector<string>>result;
        vector<pair<string , int>>copy(strs.size());

        for(int i = 0 ;i< strs.size() ; i++)
        {
            copy[i].first = strs[i];
            copy[i].second = i;
            
            sort(copy[i].first.begin() , copy[i].first.end());
        }
        sort(copy.begin(), copy.end() , comp);

        vector<string>v;

        for(int i = 0 ; i < strs.size()-1 ; i++)
        {
            v.push_back( strs[copy[i].second] );

            if(copy[i].first != copy[i+1].first )
            {
                result.push_back(v);
                v.clear();
            }
        }
            
        v.push_back( strs[copy[n-1].second] );
        result.push_back(v);

        for(int i = 0 ; i < strs.size() ; i++)
        {
            cout<<copy[i].first<<" "<< copy[i].second<<endl;
        }

        return result;
    }
};