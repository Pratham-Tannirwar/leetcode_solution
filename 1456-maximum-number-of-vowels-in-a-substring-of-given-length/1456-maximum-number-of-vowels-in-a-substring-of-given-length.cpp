class Solution {
public:
bool isvowel(char &ch){
     ch=tolower(ch);
    if(ch=='a' ||ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        return true;
    }
    return false;
}
    int maxVowels(string s, int k) {
        int n=s.length();
        int l=0,r=0;
        int maxi=0;
        int cnt=0;
        while(r<n){
             while(k<r-l+1){
                if(isvowel(s[l])){
                    cnt--;
                }
                   l++;
             }
             if(isvowel(s[r])){
                cnt++;
             }
             if(k==r-l+1){
                maxi=max(maxi,cnt);
             }  
             r++;

        }
        return maxi;
    }
};