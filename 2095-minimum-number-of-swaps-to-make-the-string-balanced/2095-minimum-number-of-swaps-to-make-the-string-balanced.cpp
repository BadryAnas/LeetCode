class Solution {
public:
    int minSwaps(string s) {

        stack<char>st;
        int res = 0;

        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i] == ']')
            {
                if(st.size() > 0)
                    st.pop();
                else
                    res++;
            }
            else
            {
                st.push('[');
            }
        }

        return (res+1)/2;
    }
};