class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n=nums.size();
         
         const int maxi=2048;
         vector<bool>boolean(maxi,false);
         vector<bool>triplet(maxi,false);

         for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                boolean[nums[i]^nums[j]]=true;
            }
         }
         for(int i=0;i<maxi;i++){
            if(!boolean[i]){
                continue;
            }
            for(int v:nums){
              triplet[i^v]=true;
            }
         }
         int cnt=0;
         for(int i=0;i<maxi;i++){
            if(triplet[i]){
                cnt++;
            }
         }
         return cnt;
    }
};