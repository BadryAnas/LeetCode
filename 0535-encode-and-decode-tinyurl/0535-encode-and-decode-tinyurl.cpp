class Solution {
public:

    map<string,string>mp;
    int counter = 1;

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        
        string res = to_string(counter++);
        mp[res] = longUrl;
        return res;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return  mp[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));