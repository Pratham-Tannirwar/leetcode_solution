class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int st=0;
        int n=nums.size();
        int end=n-1;
        int mid=st+(end-st)/2;
        int ans=nums[mid];
        int sum=0;
        for(int i=0;i<n;i++){
            int diff=abs(ans-nums[i]);
            sum+=diff;
        }
        return sum;
    }
};