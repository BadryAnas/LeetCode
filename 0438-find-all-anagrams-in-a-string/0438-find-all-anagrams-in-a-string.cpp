class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        int n = s.size(), m = p.size();
        if (n < m) return res;  
        
        vector<int> pCount(26, 0), sCount(26, 0);
        
        for (int i = 0; i < m; i++) {
            pCount[p[i] - 'a']++;
            sCount[s[i] - 'a']++;
        }
        
        if (pCount == sCount) res.push_back(0);
        
        for (int i = m; i < n; i++) {
            sCount[s[i] - 'a']++;    
            sCount[s[i - m] - 'a']--;
            
            if (sCount == pCount)    
                res.push_back(i - m + 1);
        }
        
        return res;
    }
};
