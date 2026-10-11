class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n=nums.size();
        long long ans=0;
        for(int i=0;i<n;i++){
            if(n%(i+1)==0){
              long long a=nums[i]*nums[i];
              ans+=a;
            }
        }
        return ans;
    }
};