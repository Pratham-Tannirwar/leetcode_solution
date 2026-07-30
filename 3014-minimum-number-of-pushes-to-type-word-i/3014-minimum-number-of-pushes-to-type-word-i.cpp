class Solution {
public:
    int minimumPushes(string word) {
        int n=word.length();
        int i=1;
        int m=n;
        int ans=0;
        while(m){
           if(m>=8){
              ans+=(8*i);
              m=m-8;
              i++;
           }
           else{
            ans+=m*i;
             m=0;
           }
        }
        return ans;
    }
};