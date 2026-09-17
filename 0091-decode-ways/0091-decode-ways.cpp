class Solution {
public:

int ways(string &s,int n,  vector<int>&dp){
    if(n<=1){
        return 1;
    }
    
    int prev=0,prevp=0;
      if(dp[n]!=-1){
        return dp[n];
      }
    if(s[n-1]!='0'){
        prev=ways(s,n-1,dp);
    }
    if(s[n-2]=='1' || (s[n-2]=='2' and s[n-1]<='6')){
        prevp=ways(s,n-2,dp);
    }
    return dp[n]=prev+prevp;
}
    int numDecodings(string s) {
      int n=s.size();

      if(s[0]=='0'){
        return 0;
      } 
      vector<int>dp(n+1,-1);
      return ways(s,n,dp); 
    }
};