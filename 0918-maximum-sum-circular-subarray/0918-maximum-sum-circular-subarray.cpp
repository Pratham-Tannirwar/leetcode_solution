class Solution {
public:
 int kadaneMax(vector<int>& nums) {
        int curr = nums[0];
        int ans = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            curr = max(nums[i], curr + nums[i]);
            ans = max(ans, curr);
        }

        return ans;
    }

    int kadaneMin(vector<int>& nums) {
        int curr = nums[0];
        int ans = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            curr = min(nums[i], curr + nums[i]);
            ans = min(ans, curr);
        }

        return ans;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
          int maxsum = kadaneMax(nums);

        int totalsum = 0;
        for (int x : nums) {
            totalsum += x;
        }

        int minsum = kadaneMin(nums);

        if(maxsum<0){
            return maxsum;
        }

        int circular=totalsum-minsum;

        return max(maxsum,circular);
    }
};