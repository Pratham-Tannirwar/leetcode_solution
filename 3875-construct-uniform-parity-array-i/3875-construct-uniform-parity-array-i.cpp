class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
          int n=nums1.size();
          int ecnt=0;
          int ocnt=0;
          for(int i=0;i<n;i++){
              if(nums1[i]%2==0){
                ecnt++;
              }
              else{
                ocnt++;
              }

          }
          if(ecnt>n/2 || ocnt>n/2 ){
            return true;
          }
          if(ecnt==ocnt){
            return true;
          }
          if(ecnt==n || ocnt==n){
            return true;

          }
          return false;


    }
};