class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        int sum=0;
      for(int i=0;i<n;i++){
          string a=to_string(nums[i]);
          int mini=INT_MAX;
          int maxi=INT_MIN;
           for(int j=0;j<a.size();j++){
             if(a[j]-'0'<mini){
                 mini=a[j]-'0';
             }
             if(a[j]-'0'>maxi){
                maxi=a[j]-'0';
             }
           }
           ans=max(ans,maxi-mini);
       } 
       for(int i=0;i<n;i++){
          string a=to_string(nums[i]);
          int mini=INT_MAX;
          int maxi=INT_MIN;
           for(int j=0;j<a.size();j++){
             if(a[j]-'0'<mini){
                 mini=a[j]-'0';
             }
             if(a[j]-'0'>maxi){
                maxi=a[j]-'0';
             }
           }
          if((maxi-mini)==ans){
            
            sum+=nums[i];
          }
       } 
       return sum;
    }
};