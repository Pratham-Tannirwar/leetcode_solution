class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0,r=0;
        long long power=1;
        int cnt=0;   
        while(r<n){
           power*=nums[r];
            while(power>=k){
             power=power/nums[l];
             l++;
           }
            int a=r-l+1;
             cnt+=a;
           
           r++;
        }
        return cnt;
    }
};