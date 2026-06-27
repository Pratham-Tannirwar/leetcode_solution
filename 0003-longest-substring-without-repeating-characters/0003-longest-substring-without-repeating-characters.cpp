class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int hash[256];
        memset(hash, -1, sizeof(hash));

        int n = s.size();
        int l = 0;
        int r = 0;
        int maxlen = 0;

        while (r < n) {
            if (hash[s[r]] != -1 && hash[s[r]] >= l) {
                l = hash[s[r]] + 1;
            }

            hash[s[r]] = r;
            maxlen = max(maxlen, r - l + 1);
            r++;
        }

        return maxlen;
    }
};
