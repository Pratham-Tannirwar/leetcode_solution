class Solution {
public:
    int maximumLengthSubstring(string s) {
        int i=0;
        int n=s.length();
        unordered_map<char,int>mp;
        int length=0;
        for(int j=0;j<n;j++){
              mp[s[j]]++;
              while(mp[s[j]]>2){
                mp[s[i]]--;
                i++;
              }

         length=max(length,j-i+1);
        }
        return length;
    }
};