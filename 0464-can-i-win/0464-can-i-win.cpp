class Solution {
public:

int dp[1<<20];
bool dfs(int M,int T,int k){
    if(T<=0){
        return 0;
    }
    if(dp[k]!=-1){
        return dp[k];
    }
    for(int i=0;i<M;++i){
        if(!(k&(1<<i))  && !dfs(M,T-(i+1),k|1<<i)){
            return dp[k]=1;
        }
    }
    return dp[k]=0;
}
    bool canIWin(int maxChoosableInteger, int desiredtotal) {
        
        if(desiredtotal==0){
            return 1;
        }
        int total= (maxChoosableInteger*( maxChoosableInteger+1))/2;
        if(total<desiredtotal){
            return 0;
        }
        if(total==desiredtotal){
            return  maxChoosableInteger%2;
        }
        memset(dp,-1,sizeof dp);

        return dfs( maxChoosableInteger,desiredtotal,0);
    }
};