class Solution {
public:
    long long maxSum(vector<int>& nums, int k,long long mul) {
       long long sum=0;
       sort(nums.begin(),nums.end(),greater<int>());
       for(long long i=0;i<k;i++){
           
           if(mul>1){
              long long dif;
               dif=mul*nums[i];
               sum+=dif;
           }
           else{
            sum+=nums[i];
           }
           mul--;
         
       }
       return sum;
    }
};