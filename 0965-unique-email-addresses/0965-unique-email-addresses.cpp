class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {

        set<string>s;

        for(int i = 0 ; i < emails.size() ; i++)
        {
            bool flag1 = false , flag2 = false;
            string part1 = "" , part2 = "" , result;

            for(int j = 0 ; j < emails[i].size() ; j++)
            {
                if( emails[i][j] == '@')
                {
                    flag1 = true;
                    continue;
                }
                if( emails[i][j] == '+')
                {
                    flag2 = true;
                    continue;
                }

                if(!flag1)
                {
                    if(!flag2 && emails[i][j] != '.')
                        part1 += emails[i][j];
                }
                else
                {
                    part2 += emails[i][j];
                }
            }
            result = part1 + "@" +  part2;
            s.insert(result);
        }

        for(auto x : s)
        {
            cout<<x << " ";
        }

        return s.size();
    }
};