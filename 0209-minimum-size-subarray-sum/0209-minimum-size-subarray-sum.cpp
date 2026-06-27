class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int c=INT_MAX;
        int left=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            while(sum>=target){
                c = min(c, i - left + 1);
                sum -= nums[left];
                left++;
            }

        }

            return (c==INT_MAX)?0:c;
            
        
           
        
    }
};