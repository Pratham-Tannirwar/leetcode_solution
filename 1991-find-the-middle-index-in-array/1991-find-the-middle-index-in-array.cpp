class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
       vector<int>prefixsum(n);
       vector<int>suffixsum(n);
         

         prefixsum[0]=0;
       for(int i=1;i<n;i++){
        prefixsum[i]=nums[i-1]+prefixsum[i-1];
       }
       suffixsum[n-1]=0;
       for(int i=n-2;i>=0;i--){
        suffixsum[i]=nums[i+1]+suffixsum[i+1];
       }
       int ans=-1;
       for(int i=0;i<n;i++){
            if(suffixsum[i]==prefixsum[i]){
                return i;
            }
       }
      return ans;
    }
};