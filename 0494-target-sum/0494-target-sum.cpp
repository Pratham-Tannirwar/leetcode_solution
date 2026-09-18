class Solution {
public:
    
    int solve(vector<int>& nums,int target,int i,int sum){
        if(i==nums.size()){
        if(sum==target){
            return 1;
        }
        else{
            return 0;
        }
        }
        int way1=solve(nums,target,i+1,sum+nums[i]);
        int way2=solve(nums,target,i+1,sum-nums[i]);
        return way1+way2;
        
    }
    int findTargetSumWays(vector<int>& nums, int target) {
       return solve(nums,target,0,0);
    }
};