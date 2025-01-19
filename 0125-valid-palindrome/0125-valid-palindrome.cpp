class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i] >= 65 && s[i] <= 90 || s[i] >= 97 && s[i] <= 122 || s[i] >= 48 && s[i] <= 57)
            {
                ans += tolower(s[i]);
            }
        }

        for(int i = 0, j = ans.size() -1 ; i < ans.size() ; i++ , j--)
        {
            if(ans[i] != ans[j])
                return false;
        }
        return true;
    }
};