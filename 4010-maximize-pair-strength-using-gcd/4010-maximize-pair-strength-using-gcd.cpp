class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long result=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                long long a=(1LL*nums[i]*nums[j])/(pow(__gcd(nums[i],nums[j]),2));
                result=max(result,a);
            }
        }
        return result;
    }
};