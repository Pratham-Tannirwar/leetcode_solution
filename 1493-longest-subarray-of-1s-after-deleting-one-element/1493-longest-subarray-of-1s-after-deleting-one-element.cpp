class Solution {
public:
    int longestSubarray(vector<int>& nums) {
       int j=0;
       int cnt=0;
       int maxi=0;
       for(int i=0;i<nums.size();i++){
         if(nums[i]==0){
            cnt++;
         }
         while(cnt>1){
            if(nums[j]==0){
                cnt--;
            }
            j++;
         }
       maxi=max(maxi,i-j);
       }
       return maxi;
    }
};