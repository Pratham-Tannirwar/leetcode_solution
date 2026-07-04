class Solution {
public:
bool check(vector<int>& nums){
    int n=nums.size();
    vector<int>a(n);

      for(int i=0;i<n;i++){
        int idx=0;
       for(int j=i;j<n;j++){
          a[idx]=nums[j];
          idx++;
       }
       for(int k=0;k<i;k++){
        a[idx]=nums[k];
        idx++;
       }
       bool issafe=true;
       for(int j=1;j<n;j++){
         if(a[j]<a[j-1]){
            issafe=false;
            break;
         }
       }
         if(issafe){
            return true;
         
       }
      }
      return false;
      
    }
};