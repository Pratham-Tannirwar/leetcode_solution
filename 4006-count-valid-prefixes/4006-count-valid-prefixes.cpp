class Solution {
public:
    int countValidPrefixes(string s) {
       int zcnt=0,ocnt=0;
       int n=s.size();
       int cnt=0;
       for(int i=0;i<n;i++){
            if(s[i]=='1'){
              ocnt++;
            }
            else{
                zcnt++;
            }
            int diff=abs(ocnt-zcnt);

            if(diff<=1){
                cnt++;
            }
       }  
       return cnt;
    }
};