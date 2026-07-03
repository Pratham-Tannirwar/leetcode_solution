class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>freq(26,0);
        int n=s.length();
        int l=0;
        int r=0;
        int maxl=0;
        int maxf=0;
        while(r<n){
             freq[s[r]-'A']++;

             maxf=max(maxf,freq[s[r]-'A']);
             while((r-l+1)-maxf>k){
                freq[s[l]-'A']--;
                l++;
             }

             maxl=max(r-l+1,maxl);
             r++;
        }
return maxl;
    }
};