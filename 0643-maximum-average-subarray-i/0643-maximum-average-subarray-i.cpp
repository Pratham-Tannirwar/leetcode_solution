class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       double sum=0;
    
       for(int i=0;i<k;i++){
            sum+=nums[i];

       } 
       double avg=sum/k;
       int i=0;
       for(int j=k;j<nums.size();j++){
           sum+=nums[j];
           sum-=nums[i];
           i++;
           avg=max(sum/k,avg);
       }
       
return avg;


    }
};