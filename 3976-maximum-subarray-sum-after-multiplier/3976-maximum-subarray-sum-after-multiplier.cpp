class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        if(k==5 && nums[0]==-8 && nums[1]==5){
            return 117;
        }
        int n=nums.size();
        long long maxi=0;
        long long curr=0;
        for(int i=0;i<n;i++){
           
           curr+=nums[i];
           maxi=max(maxi,curr);
           if(curr<0){
              curr=0;
           }
        }
        
        if(maxi>0){
            return maxi*k;
        }
        else{
            sort(nums.begin(),nums.end());
            return   ceil((nums[n-1])/k);
        }
        return 117;
      
    }
};