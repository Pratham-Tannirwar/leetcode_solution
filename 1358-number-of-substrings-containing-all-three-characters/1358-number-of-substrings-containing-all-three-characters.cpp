class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.length();
        int cnt=0;
        int requiredcount=3;
        unordered_map<char,int>mp;
        mp['a']=1;
        mp['b']=1;
        mp['c']=1;
        int j=0;
        int i=0;
        while(j<n){
            char ch=s[j];
            if(mp[s[j]]>0){
                requiredcount--;
            }
            mp[s[j]]--;
        
        while(requiredcount==0){
            cnt+=(n-j);
            mp[s[i]]++;
            if(mp[s[i]]>0){
                requiredcount++;
            }
            i++;
        }
        j++;
        }
        return cnt;

    }
};