class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        int n = s.size(), m = p.size();
        if (n < m) return res;  // Edge case
        
        vector<int> pCount(26, 0), sCount(26, 0);
        
        // Count frequency of characters in p and first window of s
        for (int i = 0; i < m; i++) {
            pCount[p[i] - 'a']++;
            sCount[s[i] - 'a']++;
        }
        
        // Check if the first window is an anagram
        if (pCount == sCount) res.push_back(0);
        
        // Sliding window
        for (int i = m; i < n; i++) {
            sCount[s[i] - 'a']++;    // Add new character
            sCount[s[i - m] - 'a']--;// Remove old character
            
            if (sCount == pCount)    // Check if window is an anagram
                res.push_back(i - m + 1);
        }
        
        return res;
    }
};
