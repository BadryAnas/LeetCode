class Solution {
public:
    void reverseString(vector<char>& s) {
        for(int j = s.size() -1 , i = 0 ; i <= j ; i++ , j--)
        {
            char tmp = s[i];
            s[i] = s[j];
            s[j] = tmp;
        }
    }
};