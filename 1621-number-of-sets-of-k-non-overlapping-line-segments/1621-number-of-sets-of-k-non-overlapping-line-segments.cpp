class Solution {
public:
int M=1e9+7;
int dp[1001][1001];
int solve(int n,int k,int i){
       if(k==0){
            return 1;
        }
        if(i>=n){
            return 0;
        }
        if(dp[k][i]!=-1){
            return dp[k][i];
        }
        long long skip=solve(n,k,i+1)%M;
        long long take=0;
        for(int j=i+1;j<n;j++){
            take+=solve(n,k-1,j)%M;
        }
        return dp[k][i]=(take+skip)%M;
    }
    int numberOfSets(int n, int k) {
        memset(dp,-1,sizeof(dp));
        return solve(n,k,0)%M;
    }
};