class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        int j=n-1;
        int i=0;
        long long sum=0;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                nums[i]=-nums[i];
            }
        }
        sort(nums.begin(),nums.end(),greater<int>());
        while(i<=j){
            if(i==j){
              sum+=(nums[i]*1LL*nums[i]);
            }
            long long a=(nums[i]*1LL*nums[i]);
            long long b=(nums[j]*1LL*nums[j]);
            sum+=a;
            sum-=b;
            i++;
            j--;
        }
        return sum;
    }
};