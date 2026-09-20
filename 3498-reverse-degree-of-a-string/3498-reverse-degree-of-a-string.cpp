class Solution {
public:
map<char,int>mp;

int sum=0;
    int reverseDegree(string s) {

        int i=26;
       for(char ch='a';ch<='z';ch++){
              mp[ch]=i;
               i--;
           }
        for(int i=0;i<s.length();i++){
            long long l=mp[s[i]]*(i+1);
            sum+=l;
           
        }
        return sum;
    }
};