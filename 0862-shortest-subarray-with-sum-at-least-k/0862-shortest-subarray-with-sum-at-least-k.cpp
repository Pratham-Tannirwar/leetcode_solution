class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        int l=INT_MAX;
       int n=nums.size();
       deque<int>dq;
       vector<long long>sum(n+1,0);
       int j=0;

       while(j<n){
         if(j==0){
            sum[j]=nums[j];
         }
         else{
            sum[j]=sum[j-1]+nums[j];
         }
         if(sum[j]>=k){
            l=min(l,j+1);
         }
       
         while(!dq.empty() && sum[j]-sum[dq.front()]>=k){
              l=min(l,j-dq.front());
              dq.pop_front();
           }
       while(!dq.empty() && sum[j]<sum[dq.back()]){
            dq.pop_back();
       }
         dq.push_back(j);
         j++;
       }
       if(l==INT_MAX){
        return -1;
       }
        return l;
    }
};