class Solution {
public:
    int maximumCostSubstring(string s, string chars, vector<int>& vals) {
        unordered_map<char,int>mp;
        for(int i=0;i<chars.length();i++){
            mp[chars[i]]=vals[i];
        }
         int curr = 0;
        int ans = 0;

        for (char c : s) {

            int value;
            if (mp.count(c)) {
                value = mp[c];
            }
            
            else {
                value = c - 'a' + 1;
            }
            curr = max(0, curr + value);

            ans = max(ans, curr);
        }

        return ans;
    }
};