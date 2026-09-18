class Solution {
public:
     int dp[21][2001];
     int solve(vector<int>& nums,int target,int i,int sum){
        if(i==nums.size()){
        if(sum==target){
            return 1;
        }
        else{
            return 0;
        }
        }
         if(dp[i][sum+1000]!=-1){
            return dp[i][sum+1000];
        }

        
        int way1=solve(nums,target,i+1,sum+nums[i]);
        int way2=solve(nums,target,i+1,sum-nums[i]);
        return dp[i][sum+1000]=way1+way2;
        
    }
    int findTargetSumWays(vector<int>& nums, int target) {
                memset(dp,-1,sizeof(dp));
              return solve(nums,target,0,0);
    }
};