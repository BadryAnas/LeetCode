class Solution {
public:
    bool validPalindrome(string s) {
        int count = 0 , i = 0 , j = s.size()-1, fls = 0;
        
        while(i<= j)
        {
            if(s[i] == s[j])
            {
                i++;
                j--;
            }    
            else
            {
                if(count == 1)
                {
                    fls++;
                    break;
                }
                count++;
                i++;
            }
        }

        count = 0 , i = 0 , j = s.size()-1;

        while(i<= j)
        {
            if(s[i] == s[j])
            {
                i++;
                j--;
            }    
            else
            {
                if(count == 1)
                {
                    fls++;
                    break;
                }
                count++;
                j--;
            }
        }
        if(fls == 2)
            return false;
        return true;
    }
};
