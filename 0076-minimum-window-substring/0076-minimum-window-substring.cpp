class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.length();
        if(t.length()>n){
            return "";
        }
        unordered_map<char,int>mp;

        for(char &ch:t){
            mp[ch]++;
        }
        int requiredcount=t.length();
        int i=0,j=0;
        int windowsize=INT_MAX;
        int starti=0;

        while(j<n){
            char ch=s[j];
            if(mp[ch]>0){
                requiredcount--;
            }
                mp[ch]--;
            
            while(requiredcount==0){
                int current=j-i+1;
                if(windowsize>current){
                windowsize=current;
                starti=i;
                }
            
            mp[s[i]]++;
            if(mp[s[i]]>0){
                requiredcount++;
            }
            i++;
        }
        j++;
    }
    return  windowsize==INT_MAX?"":s.substr(starti,windowsize);
    }
};