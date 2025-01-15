class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> res;
        set<string> stRes;
        map<string , int>mp;

        if(s.size() < 11)
            return res;
        
        string str = s.substr(0, 10);
        mp[str]++;

        for(int  j = 10 ; j < s.size() ;j++)
        {
            str.erase(0 ,1);
            str = str + s[j];
            mp[str]++;
        }

        for(auto &[key, value] : mp)
        {
            if ( value > 1 )
            {
                stRes.insert(key);
            }
        }

        for(auto x : stRes)
        {
            res.push_back(x);
        }

        return res;





    }
};