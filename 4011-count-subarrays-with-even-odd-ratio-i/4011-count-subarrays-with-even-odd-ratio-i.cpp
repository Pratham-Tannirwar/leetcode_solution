class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            int ecnt=0,ocnt=0;
            for(int j=i;j<n;j++){
              if(nums[j]%2==0){
                ecnt++;
              }
              else{
                ocnt++;
              }
              if(ocnt>0){
             if((1LL * ecnt * b <= 1LL * ocnt * a)){
                cnt++;
             }
              }

            }
        }
        return cnt;
    }
};