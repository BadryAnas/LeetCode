class Solution {
public:
    bool wordPattern(string pattern, string s) {

        vector<string>words;
        map<char , string>mp1;
        map<string , char>mp2;
        map<char , bool>appear1;
        map<string , bool>appear2;
        string word="";

        for(int i = 0; i < s.size() ; i++)
        {
            if(s[i] != ' ')
            {
                word+=s[i];
            }
            else
            {
                words.push_back(word);
                word = "";
            }
            if(i == s.size() -1)
            {
                words.push_back(word);
            }
        }

        if(pattern.size() != words.size())
            return false;

        for(int i = 0 ; i < pattern.size() ; i++)
        {
            if(!appear1[pattern[i]])
            {
                appear1[pattern[i]] = true;
                mp1[pattern[i]] = words[i];
            }
            else if(mp1[pattern[i]]!= words[i])
            {
                return false;
            }
            if(!appear2[words[i]])
            {
                appear2[words[i]] = true;
                mp2[words[i]] = pattern[i];
            }
            else if(mp2[words[i]] != pattern[i])
            {
                return false;
            }
        }

        return true;
    }
};