class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        int counter = 1;
        for(int i = 0 ; i < numRows ; i++)
        {
            vector<int>v;
            for(int j = 0 ; j < counter ; j++)
            {
                if(j == 0 || i == j)
                {
                    v.push_back(1);
                }
                else
                {
                    v.push_back(result[i-1][j] + result[i-1][j-1]);
                }
            }
            result.push_back(v);
            counter++;
        }
        return result;
    }
};