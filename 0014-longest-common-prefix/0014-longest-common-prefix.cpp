class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        sort(strs.begin() , strs.end());
        string result = strs[0];
        for(int i = 1 ; i < strs.size() ; i++)
        {
            for(int j = 0 ; j < min(strs[i].size() , result.size() ) ; j++)
            {
                if(result[j] != strs[i][j])
                {
                    result = strs[i].substr(0 , j );
                    break;
                }
            }
        }

        return result;
    }
};