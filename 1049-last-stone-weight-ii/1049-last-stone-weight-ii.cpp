class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
        int n=stones.size();
        long long sum=0;
        for(int &i:stones){
             sum+=i;
        }
        vector<vector<int>>dp(n+1,vector<int>(sum/2+1,0));
            
            for(int wt=stones[0];wt<=sum/2;wt++){
                dp[0][wt]=stones[0];
            }
        for(int i=1;i<stones.size();i++){
            for(int j=0;j<=sum/2;j++){
                int take=0;
                if(stones[i]<=j){
                    take=stones[i]+dp[i-1][j-stones[i]];
                }
                int notpick=dp[i-1][j];
                dp[i][j]=max(take,notpick);
            }
        }
        return sum-2*dp[n-1][sum/2];
    }
};