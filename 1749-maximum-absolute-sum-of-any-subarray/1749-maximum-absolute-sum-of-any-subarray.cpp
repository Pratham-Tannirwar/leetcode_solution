class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxsum=nums[0];
        int minsum=nums[0];
        int currsum=nums[0];
        int mincurr=nums[0];

        for(int i=1;i<nums.size();i++){
            currsum=max(nums[i],currsum+nums[i]);
            maxsum=max(currsum,maxsum);
            
            mincurr=min(nums[i],mincurr+nums[i]);
            minsum=min(mincurr,minsum);


        }
        return max(maxsum,-minsum);
    }
};