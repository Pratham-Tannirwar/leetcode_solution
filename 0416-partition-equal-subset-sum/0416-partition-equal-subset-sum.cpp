class Solution {
public:

int solve(vector<int>& nums,int n,int s,  vector<vector<int>>&dp){
          
    if(n==0){
        return 0;
    }
    if(dp[n][s]!=-1){
        return dp[n][s];
    }
    
    if(nums[n-1]<=s){
        int take=nums[n-1]+solve(nums,n-1,s-nums[n-1],dp);
        int nottake=solve(nums,n-1,s,dp);

        return dp[n][s]= max(take ,nottake);
    }

    return dp[n][s]=solve(nums,n-1,s,dp);
}

    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(sum%2==1){
            return false;
        }
        int m=sum/2;
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return solve(nums,n,sum/2,dp)==sum/2;
    }
};