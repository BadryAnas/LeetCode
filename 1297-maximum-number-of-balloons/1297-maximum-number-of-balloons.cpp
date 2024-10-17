class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char, int >mp;
        int mx = 100000 ;
        for(int i = 0 ; i < text.size() ; i++)
        {
            if(text[i] == 'b' || text[i] == 'a' || text[i] == 'l'||text[i] == 'o'||text[i] == 'n' )
            {
                mp[text[i]]++;
            }
        }

        if(mp.size() != 5)
            return 0;

        for(auto &[i,j] : mp)
        {
            if(i == 'b' || i == 'a' || i == 'n')
                mx = min(mx ,  (j / 1));            
            else
                mx = min(mx ,  (j / 2));
        }
        return mx;
    }
};