class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int l=0;
        int n=nums.size();
        long long curr=0;
        int result=INT_MIN;
        sort(nums.begin(),nums.end());
        for(int r=0;r<n;r++){
             long target=nums[r];
             curr+=nums[r];
             if(((r-l+1)*target-curr)>k){
                curr-=nums[l];
                l++;
             }
             result=max(result,(r-l+1));
        }
        return result;
    }
};